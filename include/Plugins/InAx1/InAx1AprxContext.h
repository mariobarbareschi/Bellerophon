/* * Bellerophon - Design Space Exploration for Approximate Computing technique using
 * Gentic Algorithm
 * Copyright (C) 2019 Andrea Aletto <andrea.aletto8@gmail.com>
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
 * @file   InAx1AprxTechnique.h
 * @author Andrea Aletto
 * @date   30 gen 2019
 * @brief  Implementation for the apprx Contexts of InAx1 library
 ******************************************************************************/

#ifndef INCLUDE_BELLERO_INAX1APRXCONTEXT_H_
#define INCLUDE_BELLERO_INAX1APRXCONTEXT_H_

#include "Plugins/FLAP/fap.h"
#include "Core/AprxContext.h"


namespace bellerophon{
namespace inax1Context{



class InAx1AprxContext : public bellerophon::core::AprxContext {
public:
  InAx1AprxContext() { }
  InAx1AprxContext (bellerophon::core::AprxContextIdTy id, const ::std::string& desc) 
      : AprxContext(id,desc) {
  }
  /// \brief destructor  
  virtual ~InAx1AprxContext(){}
  //*-------------------------------------------------------------------*
  // Set Methods
  //*-------------------------------------------------------------------*
  /// \brief set Location Vector 
  /// \pram tcnq Vector of location
  virtual void setLocation(::std::vector<core::AprxLocation> tcqn) override;  
  //*-------------------------------------------------------------------*
  // Functional Methods 
  //*-------------------------------------------------------------------*
  /// \brief Overload of = operator 
  virtual bellerophon::core::AprxContext* operator= (
    bellerophon::core::AprxContext& rhs) override; 

  /// \brief Get the aprx locations vector reading report
  /// \param reportPath The path to the report from which gather the info
  /// \return true if operation have success
  virtual bool readReport(::std::string report) override;
  /// \brief Get the maximum approximation grade
  /// \return Maximum approximation grade applicable
  virtual ::bellerophon::core::AprxGrade getMaxApplicableGrade() const override;


};  // end class definition
}   // end flapContext namespace
}   // end bellerophon namespace

/// \brief build specific AprxContext 
/// \detailed build an instance of InAx1AprxContext
/// \return  Return the istance of flapContext to main program.
::std::shared_ptr<::bellerophon::core::AprxContext> getInAx1AprxContext();
#endif
