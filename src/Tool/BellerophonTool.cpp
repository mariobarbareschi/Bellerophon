//
// Bellerophon - Design Space Exploration for Approximate Computing technique using
// Gentic Algorithm
// Copyright (C) 2017 Antonio Tammaro <ntonjeta@autistici.org>
//
// This file is part of Bellerophon.
//
// Bellerophon is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bellerophon is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Bellerophon.  If not, see <http://www.gnu.org/licenses/>.
//

/******************************************************************************
 * @file    main.cpp
 * @author  Antonio Tammaro
 * @date    3 gen 2017
 * @brief   Bellerophon Tool implementation.
 * @details Basic steps:
 *          - TODO
 ******************************************************************************/
// Tools Header
#include "Tool/BellerophonTool.h"
#include "Core/AprxContext.h"
#include "Core/EvolutionContext.h"
#include "Log.h"
// LLVM Header
#include "llvm/Support/CommandLine.h"

#include "clang/Tooling/CommonOptionsParser.h"

// Plugin headers
#include "Plugins/TRUNC/TruncAprxContext.h"
#include "Plugins/EvoApprox8/EvoAprxContext.h"

// C/C++ Header
#include <cstdlib>

using namespace bellerophon;

const char *overview =
"Launch a design space exploration over a C/C++ project compiled just-in-time\n";

static ::llvm::cl::OptionCategory catBellerophon("Bellerophon",
                                          "Options for the Bellerophon tool");

::llvm::cl::opt<double> optTau(::llvm::cl::Positional,
  ::llvm::cl::ValueRequired,
  ::llvm::cl::desc("<tau>"));

::llvm::cl::opt<::std::string> cDatabasePath("cd-dir",
  ::llvm::cl::desc("Specify the path of a parent directory in which search for a compile_database.json file"),
  ::llvm::cl::ValueRequired,
  ::llvm::cl::value_desc("path"),
  ::llvm::cl::cat(catBellerophon));

::llvm::cl::opt<bool> optVerbose("v", 
  ::llvm::cl::desc("Enable verbose outputs"),
  ::llvm::cl::ValueDisallowed,
  ::llvm::cl::cat(catBellerophon));

::llvm::cl::opt<bool> test("test",
  ::llvm::cl::desc("Simple test"),
  ::llvm::cl::ValueDisallowed,
  ::llvm::cl::cat(catBellerophon));
                           
::llvm::cl::opt<bool> listTechnique("l",
  ::llvm::cl::desc("Show approximate technique list"),
  ::llvm::cl::ValueDisallowed,
  ::llvm::cl::cat(catBellerophon));

::llvm::cl::opt<::std::string> technique("t",
  ::llvm::cl::desc("Select the approximate technique to apply"),
  ::llvm::cl::ValueRequired,
  ::llvm::cl::cat(catBellerophon));

::llvm::cl::opt<::std::string> Report("r",
  ::llvm::cl::desc("Report produced by Approximation Operator"),
  ::llvm::cl::ValueRequired,
  ::llvm::cl::cat(catBellerophon));

::llvm::cl::list<::std::string> objPaths("objs",
  ::llvm::cl::desc("Specify an object, or multiple comma separated, to load "
                   "when linking the executable. It can be specified multiple times"),
  ::llvm::cl::CommaSeparated,
  ::llvm::cl::ValueRequired,
  ::llvm::cl::value_desc("path to object file ('.o' , '.so'"),
  ::llvm::cl::cat(catBellerophon));

::llvm::cl::list<::std::string> arcPaths("arcs",
  ::llvm::cl::CommaSeparated,
  ::llvm::cl::desc("Specify an archive object, or multiple comma separated, to load "
                   "when linking the executable. It can be specified multiple times"),
  ::llvm::cl::ValueRequired, ::llvm::cl::value_desc("archive object-path"),
  ::llvm::cl::cat(catBellerophon));

 //TODO Add CLI option for Evolution Context Parameter File
/*static ::llvm::cl::OptionCategory catEvolution("Evolution",*/
                                          /*"Options for Evolution Algorithm");*/
::llvm::cl::opt<::std::string> ParamFile("P",
  ::llvm::cl::desc("Specify the path of the parent directory of a .param file"),
  ::llvm::cl::ValueRequired,
  ::llvm::cl::value_desc("path"),
  ::llvm::cl::cat(catBellerophon));

::llvm::cl::opt<::std::string> libDbPath(
  "libdb",
  ::llvm::cl::desc(
    "Specify the patch in which of the parent directory of a library_database.csv file"),
  ::llvm::cl::ValueRequired,
  ::llvm::cl::cat(catBellerophon));

::llvm::cl::opt<::std::string> maxApproxGrade(
  "maxGrade",
  ::llvm::cl::desc(
    "Specify the maximum approximation grade to be applied"),
  ::llvm::cl::ValueRequired,
  ::llvm::cl::cat(catBellerophon));

// TODO Add CLI option for Evolution Context Parameter File
static ::llvm::cl::OptionCategory catEvolution("Evolution",
                                          "Options for Evolution Algorithm");

// Utility functions
bool tool::BellerophonTool::optIsOccured(const ::std::string &optString, int argc, const char **argv) 
{
  for (int i = 0; i < argc; ++i){
    if (argv[i] == ("-" + optString)){
      return true;
    }
  }
  return false;
}

bool tool::BellerophonTool::registerAprxContext(
        ::std::shared_ptr<::bellerophon::core::AprxContext> op) {
  std::pair<typename AprxContextPtrMap::iterator, bool> retval =
      this->registeredContextMap.insert(
          std::pair<bellerophon::core::AprxContextIdTy,
                    ::std::shared_ptr<::bellerophon::core::AprxContext>>(
              op->getId(), op));
  return retval.second;
}

bool tool::BellerophonTool::unregisterAprxContext(
  const bellerophon::core::AprxContextIdTy &id) {
  return this->registeredContextMap.erase(id);
}

// run function
void tool::BellerophonTool::run(int argc, const char *argv[]) {
  // Hide options from category different from catBellerophon
  ::llvm::cl::HideUnrelatedOptions(catBellerophon);
  
  // Initilaze the log system
  log::BellerophonLogger::init();
    
  // Arguments Parsing
  // If there aren't, show the help
  if (argc == 1) {
    argc = 2;
    const char *help[2] = {argv[0], "-help"};
    ::clang::tooling::CommonOptionsParser helpOption(argc, help, catBellerophon,
                                                         overview);
  }

  log::BellerophonLogger::verbose(::std::to_string(argc)); 

  // Parsing options
  ::llvm::cl::ParseCommandLineOptions(argc, argv, "Bellerophon");

  // Init the verbose output
  if (optVerbose) {
    log::BellerophonLogger::initVerbose();
    log::BellerophonLogger::setVerboseLevel(9);
  }
  
  if (!maxApproxGrade.empty())
  {
    bellerophon::TruncContext::TruncAprxContext* ctnx = (bellerophon::TruncContext::TruncAprxContext*) getTruncAprxContext().get();
    ctnx->setMaxApplicableGrade(::std::stoi(maxApproxGrade));
    bellerophon::EvoApproxLib::EvoAprxContext* evoctnx = (bellerophon::EvoApproxLib::EvoAprxContext*) getEvoAprxContext().get();
    evoctnx->setMaxApplicableGrade(::std::stoi(maxApproxGrade));
    log::BellerophonLogger::verbose("Max approx. grade: " + maxApproxGrade);
  }
  
  if(!optTau){
    log::BellerophonLogger::error("The maximum error value is missing");
    exit(1); 
  }
    double tau = optTau;
    optTau.removeArgument(); // To avoid clang complains


  // List possible approximate technique   
  if(listTechnique){
    //show the approximate technique list
    const tool::AprxContextPtrMap &map = this->registeredContextMap;
    for (auto it = map.begin(); it !=map.end(); it++) {
      log::BellerophonLogger::info("Context: " + it->first().str() + "\n");  
    }
    exit(0);
  }
  
  if (test){
    ::bellerophon::engine::ExecutionEngineHelper helper;

    // Add object files
    // IMPORTANT: Objects MUST be compiled with : -fno-use-cxa-atexit
    for (const auto &objPath : objPaths) {
      log::BellerophonLogger::info("Loading object:" + objPath + "\n");
      helper.addObjPath(objPath);
    }

    // Load compilation database
    if (!helper.setCompilationDatabase(cDatabasePath)) {
      log::BellerophonLogger::error("Execution stop: Unable to find a valid compilation database\n");
			exit(1);
    }

    helper.compile();

    ::llvm::GenericValue retval;
    if (!helper.runFunction(retval, "BELLERO_getError")) {
      log::BellerophonLogger::info("Return value: " + ::std::to_string((double)retval.DoubleVal) + "\n");
    }
    exit(0);
  }

  ::std::string path;
  if(!cDatabasePath.empty()){
    path = cDatabasePath;
  }else{  
    log::BellerophonLogger::error("The Compilation Databese Path is missing");
    exit(1);
  }

  // Initialize Execution Engine 
  if (!this->Context.initExecutionEngine(path)) {
    log::BellerophonLogger::fatal("Cannot initialize the Execution Engine");
    exit(1);
  }
   
  // Add object files
  // IMPORTANT: Objects MUST be compiled with : -fno-use-cxa-atexit
  for (const auto &objPath : objPaths) {
    log::BellerophonLogger::verbose( "Loading object:" + objPath + "\n");
    this->Context.addObj(objPath);
  }

  for (const auto &arcPath : arcPaths) {
    ::llvm::outs() << "Loading object archive:" << arcPath << "\n";
    this->Context.addArc(arcPath);
  }
  
  if(!libDbPath.empty()){
    ::llvm::outs() << "Trying to read library_database.csv from " << libDbPath << "\n";
    this->Context.addLibraryDatabase(libDbPath);
  }

	
  // Plugin management 
  // Search in registered Context
  ::std::shared_ptr<core::AprxContext> ctx;

  const tool::AprxContextPtrMap &map = this->registeredContextMap;
  auto it = map.find(technique);

  if(it != map.end()){
    log::BellerophonLogger::verbose("Read Context " + it->first().str());
    ctx = it->second;
  }else{
    log::BellerophonLogger::error("Cannot read approximate technique");
    exit(1);
  }
  
  if(!Report.empty()){  
    // Intialize with Report
    ctx->readReport(Report); 
  }else{
    log::BellerophonLogger::error("Report path is missing");
    exit(1);
  }
  // Set AprxContext in Evolution
  this->Context.setAprxContext(ctx); 
  
  // Initialize Evolution Parameter and apply evolution algorithm
  ::std::string param = "";
  if (!ParamFile.empty())
    param = "@" + ParamFile;
  
  this->Context.initializeEvolution(tau,param);
  
  // TODO print result on .csv
  // print results
  this->Context.printResult();   
}
