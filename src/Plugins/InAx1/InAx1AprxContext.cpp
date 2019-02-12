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
 * @file   InAx1AprxTechnique.cpp
 * @author Andrea Aletto
 * @date   30 gen 2019
 * @brief  Implementation for the InAx1 aprx context
 ******************************************************************************/
// Tools Headers
#include "Core/AprxContext.h"
#include "Core/AprxTechnique.h"
#include "Plugins/InAx1/InAx1AprxTechnique.h"
#include "Plugins/InAx1/InAx1AprxContext.h"
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
using namespace inax1;


::bellerophon::core::AprxGrade inax1Context::InAx1AprxContext::getMaxApplicableGrade() const
{
  return 32; //max bits that can be approximated
}
::std::shared_ptr<core::AprxContext> getInAx1AprxContext()
{
  ::std::shared_ptr<inax1Context::InAx1AprxContext> r
    (
      new inax1Context::InAx1AprxContext(
        "InAx1Aprx",                     // Id
        "InAx1 approximation plugin")    // Description
    );
  return r;
}

void inax1Context::InAx1AprxContext::setLocation (::std::vector<core::AprxLocation> tcnq)
{
  this->locations = tcnq;
}

core::AprxContext* inax1Context::InAx1AprxContext::operator= (core::AprxContext &rhs)
{
  inax1Context::InAx1AprxContext *r = 
      new inax1Context::InAx1AprxContext(rhs.getId(),rhs.getDesc());

  r->setLocation(rhs.getLocations());
  
  return r;  
}

bool inax1Context::InAx1AprxContext::readReport(::std::string reportPath)
{

  ::std::vector<core::AprxLocation> v;
  if (reportPath == "") {
    log::BellerophonLogger::error("Empty report path");
    return false;

  }
  constexpr char cols = 5;
  io::CSVReader<cols, io::trim_chars<' '>, io::double_quote_escape<',', '\"'>> inax1_report(reportPath);
  ::std::string nabId;
  int line;
  ::std::string Op1, Op2, OpRet; // Operands

  log::BellerophonLogger::verbose("Reading a InAx1 report:\n");
  while (inax1_report.read_row(nabId, line, Op1, Op2, OpRet)) {
    log::BellerophonLogger::verbose(
      "NabId: " + nabId +
      "\nOperand 1: " + Op1 + ", Operand 2: " + Op2 +
      ", Return Operand: " + OpRet + ".\n\n");

    // Build an instance of InAx1AprxTechnique 
    InAx1AprxTechnique  c(this->LocStartId,nabId);
    this->LocStartId++;
    c.setLHS(Op1);
    c.setRHS(Op2);
    // Build an instance of AprxLocation
    core::AprxLocation l(::std::make_shared<InAx1AprxTechnique>(c));
    // Push back in AprxLocation Vector
    v.push_back(l);
  }
  if(!v.empty())
    // Save the location Vector 
    setLocation(v);
  else return false;
  return true;

}
