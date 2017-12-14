//
// Bellerophon - Design Space Exploration for Approximate Computing technique using
// Gentic Algorithm
// Copyright (C) 2017 Mario Barbareschi <mario.barbareschi@unina.it>
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
 * @file   VpanAprxTechnique.cpp
 * @author Mario Barbareschi
 * @date   14 dec 2017
 * @brief  Implementation for the vpa native aprx context
 ******************************************************************************/
// Tools Headers
#include "Core/AprxContext.h"
#include "Core/AprxTechnique.h"
#include "Plugins/VPA_N/VpanAprxTechnique.h"
#include "Plugins/VPA_N/VpanAprxContext.h"
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
using namespace vpan;


::bellerophon::core::AprxGrade vpanContext::VpanAprxContext::getMaxApplicableGrade() const
{
    return 3;
  }
::std::shared_ptr<core::AprxContext> getVpanAprxContext()
{
  ::std::shared_ptr<vpanContext::VpanAprxContext> r
    (
      new vpanContext::VpanAprxContext(
        "VpanAprx",                     // Id
        "VPA Native approximation plugin")    // Description
    );
  return r;
}

void vpanContext::VpanAprxContext::setLocation (::std::vector<core::AprxLocation> tcnq)
{
  this->locations = tcnq;
}

core::AprxContext* vpanContext::VpanAprxContext::operator= (core::AprxContext &rhs)
{
  vpanContext::VpanAprxContext *r = 
      new vpanContext::VpanAprxContext(rhs.getId(),rhs.getDesc());

  r->setLocation(rhs.getLocations());
  
  return r;  
}

bool vpanContext::VpanAprxContext::readReport(::std::string reportPath)
{

  ::std::vector<core::AprxLocation> v;
  if (reportPath == "") {
    log::BellerophonLogger::error("Empty report path");
    return false;

  }
  constexpr char cols = 7;
  io::CSVReader<cols, io::trim_chars<' '>, io::double_quote_escape<',', '\"'>>
      vpaReport(reportPath);
  ::std::string OpId;
  int line;
  ::std::string OpTy, OpRetTy;
  ::std::string Op1, Op2, OpRet; // Operands

  log::BellerophonLogger::verbose("Reading a VPA report:\n");
  while (vpaReport.read_row(OpId, line, OpRetTy, OpTy, Op1, Op2, OpRet)) {
    log::BellerophonLogger::verbose(
      "OperationId: " + OpId +
      ", OpReType: "  + OpRetTy +
      ", OperationType: "+ OpTy + ".\n" +
      "Operand 1: " + Op1 + ", Operand 2: " + Op2 +
      ", Return Operand: " + OpRet + ".\n\n");

    vpanMacroType retTy;
    if (OpRetTy == "LONG DOUBLE") {
      retTy = ::vpan::LONG_DOUBLE;
    } else if (pRetTy == "DOUBLE"){
      retTy = ::vpan::DOUBLE;
    } else {
      retTy = ::vpan::FLOAT;
    }
    
    vpan::vpaOperation Ty = vpan::vpaOperation::ADD;
    if(OpTy == "SUB")       Ty = vpan::vpaOperation::SUB;
    else if(OpTy == "MUL")  Ty = vpan::vpaOperation::MUL;
    else if(OpTy == "DIV")  Ty = vpan::vpaOperation::DIV;
    // Build an instance of VpanAprxTechnique 
    VpanAprxTechnique  c(this->LocStartId,OpId,retTy,Ty);
    this->LocStartId++;
    c.setLHS(Op1);
    c.setRHS(Op2);
    // Build an instance of AprxLocation
    core::AprxLocation l(::std::make_shared<VpanAprxTechnique>(c));
    // Push back in AprxLocation Vector
    v.push_back(l);
  }
  if(!v.empty())
    // Save the location Vector 
    setLocation(v);
  else return false;
  return true;

}
