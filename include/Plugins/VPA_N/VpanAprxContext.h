/* * Bellerophon - Design Space Exploration for Approximate Computing technique using
 * Gentic Algorithm
// Copyright (C) 2017 Mario Barbareschi <mario.barbareschi@unina.it>
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
 * @file   VpaAprxTechnique.h
 * @author Mario Barareschi
 * @date   14 dec 2017
 * @brief  Implementation for the apprx Contexts of VPA Native library
 ******************************************************************************/

#ifndef INCLUDE_BELLERO_VPANAPRXCONTEXT_H_
#define INCLUDE_BELLERO_VPANAPRXCONTEXT_H_

#include "Plugins/VPA_N/vpa_n.h"
#include "Core/AprxContext.h"


namespace bellerophon{
namespace vpanContext{



class VpanAprxContext : public bellerophon::core::AprxContext {
public:
  VpanAprxContext() { }
  VpanAprxContext (bellerophon::core::AprxContextIdTy id, const ::std::string& desc) 
      : AprxContext(id,desc) {
  }
  /// \brief destructor  
  virtual ~VpanAprxContext(){}
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
/// \detailed build an instance of FlapAprxContext
/// \return  Return the istance of flapContext to main program.
::std::shared_ptr<::bellerophon::core::AprxContext> getVpanAprxContext();
#endif /*INCLUDE_BELLERO_VPANAPRXCONTEXT_H_*/
