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
* @file   FlapAprxTechnique.cpp
* @author Salvatore Barone
* @date   23 Ott 2020
* @brief  Implementation for the trunc aprx technique
******************************************************************************/

// Tools Headers
#include "Plugins/TRUNC/TruncAprxTechnique.h"
#include "Plugins/TRUNC/trunc.h"
#include "lib/csv.h"
#include "Log.h"

// LLVM Headers
#include "llvm/ADT/STLExtras.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Debug.h"

// C/C++ Headers
#include <map>
#include <memory>
#include <utility>
#include <stdio.h>
using namespace bellerophon;

TruncAprxTechnique::TruncAprxTechnique (
    unsigned id,
    const ::std::string opId,
    const ::std::string lhs,
    const ::std::string rhs,
    const ::std::string ty) :
  AprxTechnique (id),
  OpId (opId),
  OperandLHS(lhs),
  OperandRHS(rhs)
{
  if (ty == "+") OpTy = ADD;
  if (ty == "-") OpTy = SUB;
  if (ty == "*") OpTy = MUL;
  if (ty == "/") OpTy = DIV;
}
  ::std::vector<::std::string> TruncAprxTechnique::getGlobalValueNames() const
{
  ::std::vector<::std::string> names;
  names.push_back(this->OpId);
  return names;
}

void TruncAprxTechnique::applyApproximation(
    ::core::AprxGrade g, ::std::vector<uint64_t> addrs) const
{
  truncate::ax_integer *axi = (truncate::ax_integer*)addrs.at(0);
  char message[100];
  sprintf(message, "Address: %016x, NAB: %d, MASK: %016x\n", axi, axi->getNab(), axi->getMask());
  log::BellerophonLogger::verbose(message);
  uint8_t maxGrade = axi->getMaxApprxGrade();
  if (g > maxGrade) g = maxGrade;
  axi->setNAB(g);
  sprintf(message, "Address: %016x, NAB: %d, MASK: %016x\n", axi, axi->getNab(), axi->getMask());

  log::BellerophonLogger::verbose(message);
}

::std::vector<::std::string> TruncAprxTechnique::applyApproximation(
      ::bellerophon::core::AprxGrade g) const
{
  ::std::vector<::std::string> args;
  args.push_back("-D" + this->OpId + "=" + ::std::to_string(g));
  return args;
}


