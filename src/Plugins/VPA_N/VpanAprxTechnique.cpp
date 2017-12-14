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
* @date   14 dec 2017
* @brief  Implementation for the vpan native aprx technique
******************************************************************************/

// Tools Headers
#include "Plugins/VPA_N/VpanAprxTechnique.h"
#include "Plugins/VPA_N/vpa_n.h"
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

::std::vector<::std::string> VpanAprxTechnique::getGlobalValueNames() const
{
  ::std::vector<::std::string> names;
  names.push_back(this->OpId);
  return names;
}

static std::string vpanGradeToString(const vpa::VpaPrecision prec){
 if(prec == LONG_DOUBLE)
	return std::string("long double");
 else if(prec == DOUBLE)
	return std::string("double");
 else std::string("float");
}

static std::string vpanApproxGradeToString(const unsigned short i){
 if(i == 0)
	return std::string("long double");
 else if(i == 1)
	return "double";
 else "float";
}

void VpanAprxTechnique::applyApproximation(
    ::core::AprxGrade g, ::std::vector<uint64_t> addrs) const
{
  // Take the maximum
  unsigned short actualGrade = 0;
  if (this->OpRetTy == DOUBLE) {
    actualGrade = 1;
  } else if (this->OpRetTy == FLOAT) {
    actualGrade = 2;
  } 

  assert( g < 3); // Precondition

  ::vpa_n::VpaPrecision *p = (::vpa::VpaPrecision *)addrs.at(0);

  std::stringstream stream;
  stream << "0x" 
         << std::setfill ('0') << std::setw(sizeof(void*)*2) 
         << std::hex << addrs.at(0);
    
  log::BellerophonLogger::verbose(
    this->OpId+" @ Address: " + stream.str() +
    " - Prec(" + vpanGradeToString(*p) + ")\n");
    
    log::BellerophonLogger::verbose( "Actual grade: " + vpanApproxGradeToString(actualGrade) +
    "; Required grade: "+ vpanApproxGradeToString(actualGrade+g) +"\n");
    
    actualGrade+=g;
    if(actualGrade == 0)
        *p = ::vpa_n::LONG_DOUBLE;
    else if(actualGrade == 1)
        *p = ::vpa::DOUBLE;
    else
        *p = ::vpa::FLOAT;

  log::BellerophonLogger::verbose(
    "After approximation: " + vpanGradeToString(*p) +
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
