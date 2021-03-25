/* Bellerophon - Design Space Exploration for Approximate Computing technique
 * using Gentic Algorithm
 *
 * Copyright (C) 2020 Salvatore Barone <salvator.barone@gmail.com>
 *
 * This file is part of Bellerophon.
 *
 * Bellerophon is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Bellerophon is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Bellerophon.  If not, see <http://www.gnu.org/licenses/>.
 */

/******************************************************************************
 * @file   TruncAprxTechnique.cpp
 * @author Salvatore Barone
 * @date   23 Ott 2020
 * @brief  Implementation for the Trunc aprx context
 ******************************************************************************/
 
// Tools Headers
#include "Core/AprxContext.h"
#include "Core/AprxTechnique.h"
#include "Plugins/EvoApprox8/EvoAprxContext.h"
#include "Plugins/EvoApprox8/EvoAprxTechnique.h"
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

bool EvoApproxLib::EvoAprxContext::readReport(::std::string reportPath)
{
  ::std::vector<core::AprxLocation> v;
  if (reportPath == "") {
    log::BellerophonLogger::error("Empty report path");
    return false;
  }
  constexpr char cols = 6;
  io::CSVReader<cols, io::trim_chars<' '>, io::double_quote_escape<',', '\"'>> report(reportPath);
  ::std::string OpId;
  int line;
  ::std::string Op1, OpTy, Op2, OpRet; // Operands

  log::BellerophonLogger::verbose("Reading EvoApprox report:\n");
  while (report.read_row(OpId, line, Op1, OpTy, Op2, OpRet))
  {
    log::BellerophonLogger::verbose("OperationId: " + OpId + "Operand 1: " + Op1 + ", Operand 2: " + Op2 + ", Return Operand: " + OpRet + ".\n\n");
    // Build an instance of EvoAprxTechnique
    EvoAprxTechnique  tac(this->LocStartId, OpId, Op1, Op2, OpTy);
    this->LocStartId++;
    
    // Build an instance of AprxLocation
    core::AprxLocation l(::std::make_shared<EvoAprxTechnique>(tac));
    
    // Push back in AprxLocation Vector
    v.push_back(l);
  }
  if(!v.empty())
    // Save the location Vector
    setLocation(v);
  else return false;
    return true;
}

::std::shared_ptr<::bellerophon::core::AprxContext> getEvoAprxContext()
{
  static ::std::shared_ptr<bellerophon::EvoApproxLib::EvoAprxContext> shr_ptr;
  if (shr_ptr == NULL)
    shr_ptr = ::std::shared_ptr<bellerophon::EvoApproxLib::EvoAprxContext>(new bellerophon::EvoApproxLib::EvoAprxContext("EvoAprx","Integer approximate operators plugin"));
  return shr_ptr;
}
