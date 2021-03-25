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
* @file   EvoAprxTechnique.cpp
* @author Salvatore Barone
* @date   25 Mar 2020
* @brief  Implementation for the trunc aprx technique
******************************************************************************/

// Tools Headers
#include "Plugins/EvoApprox8/EvoAprxTechnique.h"
#include "Plugins/EvoApprox8/evoapproxlib.h"
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

EvoAprxTechnique::EvoAprxTechnique (
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
  if (ty == "*") OpTy = MUL;
}

::std::vector<::std::string> EvoAprxTechnique::getGlobalValueNames() const
{
  ::std::vector<::std::string> names;
  names.push_back(this->OpId);
  return names;
}

void EvoAprxTechnique::applyApproximation(
    ::core::AprxGrade g, ::std::vector<uint64_t> addrs) const
{
  int* nab = (int*)addrs.at(0);
  char message[100];
  sprintf(message, "Address: %016lx, Actual grade: %d, New grade %d", nab, *nab, g);
  log::BellerophonLogger::verbose(message);
  *nab = g;
}

::std::vector<::std::string> EvoAprxTechnique::applyApproximation(
      ::bellerophon::core::AprxGrade g) const
{
  ::std::vector<::std::string> args;
  args.push_back("-D" + this->OpId + "=" + ::std::to_string(g));
  return args;
}


