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
 * @file   TruncAprxTechnique.h
 * @author Salvatore Barone
 * @date   23 Ott 2020
 * @brief  Implementation for the apprx Contexts of TRUNC library
 ******************************************************************************/

#ifndef INCLUDE_BELLERO_TRUNCAPRXCONTEXT_H_
#define INCLUDE_BELLERO_TRUNCAPRXCONTEXT_H_

#include "Core/AprxContext.h"


namespace bellerophon{
namespace TruncContext{

class TruncAprxContext : public bellerophon::core::AprxContext {
public:
  
  TruncAprxContext (bellerophon::core::AprxContextIdTy id, const ::std::string& desc, int grade = 64) : AprxContext(id,desc), maxApproxGrade(grade) {}
  
  /// \brief destructor  
  virtual ~TruncAprxContext(){}
  
  //*-------------------------------------------------------------------*
  // Set Methods
  //*-------------------------------------------------------------------*
  /// \brief set Location Vector 
  /// \pram tcnq Vector of location
  virtual void setLocation(::std::vector<core::AprxLocation> tcqn) override
  {
    this->locations = tcqn;
  }
  
  //*-------------------------------------------------------------------*
  // Functional Methods 
  //*-------------------------------------------------------------------*
  /// \brief Overload of = operator 
  virtual bellerophon::core::AprxContext* operator= (bellerophon::core::AprxContext& rhs) override
  {
    TruncContext::TruncAprxContext *r = new TruncContext::TruncAprxContext(rhs.getId(),rhs.getDesc());
    r->setLocation(rhs.getLocations());
    return r;
  }

  /// \brief Get the aprx locations vector reading report
  /// \param reportPath The path to the report from which gather the info
  /// \return true if operation have success
  virtual bool readReport(::std::string report) override;
  
  /// \brief Get the maximum approximation grade
  /// \return Maximum approximation grade applicable
  virtual ::bellerophon::core::AprxGrade getMaxApplicableGrade() const override
  {
    return maxApproxGrade;
  }
  
  void setMaxApplicableGrade(int grade) {maxApproxGrade = grade;}
  
  private:
    int maxApproxGrade;
  
};  // end class definition

}   // end truncContext namespace
}   // end bellerophon namespace

/// \brief build specific AprxContext 
/// \detailed build an instance of FlapAprxContext
/// \return  Return the istance of flapContext to main program.
::std::shared_ptr<::bellerophon::core::AprxContext> getTruncAprxContext();

#endif
