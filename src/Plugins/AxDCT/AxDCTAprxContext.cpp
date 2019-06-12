//
// Bellerophon - Design Space Exploration for Approximate Computing technique using
// Gentic Algorithm
// Copyright (C) 2019 Andrea Aletto <andrea.aletto8@gmail.com>
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
 * @file   AxDCTAprxContext.cpp
 * @author Andrea Aletto
 * @date   19 feb 2019
 * @brief  Implementation for the AxDCT aprx context
 ******************************************************************************/
// Tools Headers
#include "Core/AprxContext.h"
#include "Core/AprxTechnique.h"
#include "Plugins/AxDCT/AxDCTAprxTechnique.h"
#include "Plugins/AxDCT/AxDCTAprxContext.h"
#include "Log.h"
#include "lib/csv.h"
// LLVM Headers
#include "llvm/ADT/STLExtras.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Debug.h"
// C/C++ Headers
#include <map>
#include <memory>
#include <utility>

using namespace bellerophon;


::bellerophon::core::AprxGrade axdctcontext::AxDCTAprxContext::getMaxApplicableGrade() const
{
  return 15; //max(bits that can be approximated, approximation value that loopbreak can have, count of inexact cells) = max(16,8,10)-1 = 15
}
::std::shared_ptr<core::AprxContext> getAxDCTAprxContext()
{
  ::std::shared_ptr<axdctcontext::AxDCTAprxContext> r
    (
      new axdctcontext::AxDCTAprxContext(
        "AxDCTAprx",                     // Id
        "AxDCT approximation plugin")    // Description
    );
  return r;
}

void axdctcontext::AxDCTAprxContext::setLocation (::std::vector<core::AprxLocation> tcnq)
{
  this->locations = tcnq;
}

core::AprxContext* axdctcontext::AxDCTAprxContext::operator= (core::AprxContext &rhs)
{
  axdctcontext::AxDCTAprxContext *r = 
      new axdctcontext::AxDCTAprxContext(rhs.getId(),rhs.getDesc());

  r->setLocation(rhs.getLocations());
  
  return r;  
}

bool axdctcontext::AxDCTAprxContext::readReport(::std::string reportPath)
{

  ::std::vector<core::AprxLocation> v;
  if (reportPath == "") {
    log::BellerophonLogger::error("Empty report path");
    return false;

  }
  constexpr char cols = 5;
  io::CSVReader<cols, io::trim_chars<' '>, io::double_quote_escape<',', '\"'>> axdct_report(reportPath);
  ::std::string opId;
  int line;
  ::std::string Op1, Op2, OpRet; // Operands

  log::BellerophonLogger::verbose("Reading a AxDCT report:\n");
  while (axdct_report.read_row(opId, line, Op1, Op2, OpRet)) {

    if(opId.rfind("nab",0) != ::std::string::npos) {
      char info[100];
      sprintf(info, "NabId: %s\nLine: %d\nOperand 1: %s, Operand 2: %s, Return Operand: %s.\n\n", opId.c_str(), line, Op1.c_str(), Op2.c_str(), OpRet.c_str());
      log::BellerophonLogger::verbose(info);

      // Build an instance of AxDCTAprxTechnique 
      AxDCTAprxTechnique  c(this->LocStartId,opId, AxDCT_ADD);
      this->LocStartId++;
      // Build an instance of AprxLocation
      core::AprxLocation l(::std::make_shared<AxDCTAprxTechnique>(c));
      // Push back in AprxLocation Vector
      v.push_back(l);

    } else if(opId.rfind("base",0) != ::std::string::npos){
      char info[100];
      sprintf(info, "BaseId: %s\nLine: %d.\n\n", opId.c_str(), line);
      log::BellerophonLogger::verbose(info);

      // Build an instance of AxDCTAprxTechnique 
      AxDCTAprxTechnique  c(this->LocStartId,opId, AxDCT_LOOPBREAK);
      this->LocStartId++;
      // Build an instance of AprxLocation
      core::AprxLocation l(::std::make_shared<AxDCTAprxTechnique>(c));
      // Push back in AprxLocation Vector
      v.push_back(l);

    } else if(opId.rfind("cellType",0) != ::std::string::npos){
      char info[100];
      sprintf(info, "CellId: %s\nLine: %d.\n\n", opId.c_str(), line);
      log::BellerophonLogger::verbose(info);

      // Build an instance of AxDCTAprxTechnique 
      AxDCTAprxTechnique  c(this->LocStartId,opId, AxDCT_CELLTYPE);
      this->LocStartId++;
      // Build an instance of AprxLocation
      core::AprxLocation l(::std::make_shared<AxDCTAprxTechnique>(c));
      // Push back in AprxLocation Vector
      v.push_back(l);

    } else log::BellerophonLogger::error( "\n**ERROR:\nUnexpected value id (" + opId + ") from CSV file.\n\n" );

    
  }
  if(!v.empty())
    // Save the location Vector 
    setLocation(v);
  else return false;
  return true;

}
