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
* @file   AxDCTAprxTechnique.cpp
* @author Andrea Aletto
* @date   18 feb 2019
* @brief  Implementation for the AxDCT aprx technique
******************************************************************************/

// Tools Headers
#include "Plugins/AxDCT/AxDCTAprxTechnique.h"
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

::std::vector<::std::string> AxDCTAprxTechnique::getGlobalValueNames() const
{
  ::std::vector<::std::string> names;
  names.push_back(this->OpId);
  return names;
}

void AxDCTAprxTechnique::applyApproximation(
    ::core::AprxGrade g, ::std::vector<uint64_t> addrs) const
{
  switch(this->type){
    case AxDCT_ADD:
      {
        // Take the maximum
        unsigned short maxGradeForNab = 32;

        if( !(g <= maxGradeForNab) ){ g=0; } //g has been set to an inacceptable value, so I put it to 0, that is "no approximation" 

        // ::fap::FloatPrecTy *p = (::fap::FloatPrecTy *)addrs.at(0);
        int *p = (int *)addrs.at(0);

        log::BellerophonLogger::verbose(
          "Address: " + ::std::to_string(addrs.at(0)) +
          " - NAB: ("  +::std::to_string(*p) + ")\n");

        *p = (g);

        log::BellerophonLogger::verbose( "After approximation: NAB (" + ::std::to_string(*p) + ")\n");

        break;
      }
    
    case AxDCT_LOOPBREAK:
      {
        // Take the maximum
        unsigned short minGradeForBase = 8;

        if( !(g <= minGradeForBase) ){ g=8; } //g has been set to an inacceptable value, so I put it to 8, that is "no approximation"

        int *p = (int *)addrs.at(0);

        log::BellerophonLogger::verbose(
          "Address: " + ::std::to_string(addrs.at(0)) +
          " - Base: ("  +::std::to_string(*p) + ")\n");

        *p = (g);

        log::BellerophonLogger::verbose( "After approximation: Base (" + ::std::to_string(*p) + ")\n");

        break;
      }

    default:
      {
        log::BellerophonLogger::fatal("Unrecognized AxDCT Aprx type. Exiting.");
        break;
      }
  }
  
}

::std::vector<::std::string> AxDCTAprxTechnique::applyApproximation(
      ::bellerophon::core::AprxGrade g) const
{
  ::std::vector<::std::string> args;

  switch(this->type){
    case AxDCT_ADD:
    {
      // Take the maximum
      unsigned short maxGradeForNab = 32;

      if( !(g <= maxGradeForNab) ){ g=0; } //g has been set to an inacceptable value, so I put it to 0, that is "no approximation" 

      ::std::string prec = "{" + ::std::to_string(g) + "}";

      args.push_back("-D" + this->OpId + "=" + prec + "");
      log::BellerophonLogger::verbose(
        "AprxLoxContext[" + ::std::to_string(this->Id) + "] - \n" +
        "Adding argument: -D" + this->OpId + "=" + prec + "\n");

      break;
    }
    
    case AxDCT_LOOPBREAK:
    {
      // Take the maximum
      unsigned short minGradeForBase = 8;

      if( !(g <= minGradeForBase) ){ g=8; } //g has been set to an inacceptable value, so I put it to 8, that is "no approximation" 

      ::std::string prec = "{" + ::std::to_string(8-g) + "}";

      args.push_back("-D" + this->OpId + "=" + prec + "");
      log::BellerophonLogger::verbose(
        "AprxLoxContext[" + ::std::to_string(this->Id) + "] - \n" +
        "Adding argument: -D" + this->OpId + "=" + prec + "\n");

      break;
    }

    default:
    {
      log::BellerophonLogger::fatal("Unrecognized AxDCT Aprx type. Exiting.");
      break;
    }
  }

  return args;
}


void AxDCTAprxTechnique::dump(::llvm::raw_ostream &out) const {}
