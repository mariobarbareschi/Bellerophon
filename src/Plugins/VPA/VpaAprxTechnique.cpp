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
* @file   VpaAprxTechnique.cpp
* @author Mario Barbareschi
* @date   30 jun 2017
* @brief  Implementation for the vpa aprx technique
******************************************************************************/

// Tools Headers
#include "Plugins/VPA/VpaAprxTechnique.h"
#include "Plugins/VPA/vpa.h"
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

using namespace bellerophon;

::std::vector<::std::string> VpaAprxTechnique::getGlobalValueNames() const
{
  ::std::vector<::std::string> names;
  names.push_back(this->OpId);
  return names;
}

void VpaAprxTechnique::applyApproximation(
    ::core::AprxGrade g, ::std::vector<uint64_t> addrs) const
{
  // Take the maximum
  unsigned short actualGrade = 0;
  if (this->OpRetTy == FLOAT) {
    actualGrade = 1;
  }

  assert(g <= 3); // Precondition

  ::vpa::FloatingPointPrecision *p = (::vpa::FloatingPointPrecision *)addrs.at(0);

  std::stringstream stream;
  stream << "0x" 
         << std::setfill ('0') << std::setw(sizeof(void*)*2) 
         << std::hex << addrs.at(0);
    
  log::BellerophonLogger::verbose(
    this->OpId+" @ Address: " + stream.str() +
    " - Prec("  +::std::to_string(p->exp_size) + ":" + ::std::to_string(p->mant_size) +
    ")\n");
    
    log::BellerophonLogger::verbose( "Actual grade: " + ::std::to_string(actualGrade) +
    "; Required grade: "+ ::std::to_string(g) +"\n");
    
    actualGrade+=g;
    if(g == 0) //DOUBLE
        *p = ::vpa::double_prec;
    else if(g == 1) //FLOAT
        *p = ::vpa::float_prec;
    else if(g == 2) //HALF
        *p = ::vpa::half_prec;

  log::BellerophonLogger::verbose(
    "After approximation: " + ::std::to_string(p->exp_size) +
    ":" + ::std::to_string(p->mant_size) +
    "\n");
}

::std::vector<::std::string> VpaAprxTechnique::applyApproximation(
      ::bellerophon::core::AprxGrade g) const
{
  ::std::vector<::std::string> args;

  // Take the maximum
  unsigned short expPrec = 11;
  unsigned short maxMantPrec = 52;
  if (this->OpRetTy == FLOAT) {
    expPrec = 8;
    maxMantPrec = 23;
  }

  assert(g <= maxMantPrec); // Precondition

  ::std::string prec = "{" + ::std::to_string(expPrec) + "," +
                       ::std::to_string(maxMantPrec - g) + "}";

  args.push_back("-D" + this->OpId + "=" + prec + "");
  log::BellerophonLogger::verbose(
    "AprxLoxContext[" + ::std::to_string(this->Id) + "] - \n" +
    "Adding argument: -D" + this->OpId + "=" + prec + "\n");

  return args;
}


void VpaAprxTechnique::dump(::llvm::raw_ostream &out) const {}
