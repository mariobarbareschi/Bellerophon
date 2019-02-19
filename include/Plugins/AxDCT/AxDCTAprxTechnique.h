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

//===----------------------------------------------------------------------===//
/// \file AxDCTAprxTechnique.h
/// \author Andrea Aletto
/// \date  18 feb 2019
/// \brief This file makes visible Approximate Context
//===----------------------------------------------------------------------===//
#ifndef INCLUDE_BELLEROPHON_AXDCTAPRXTECHNIQUE_H_
#define INCLUDE_BELLEROPHON_AXDCTAPRXTECHNIQUE_H_

// Tools Headers
#include "Core/AprxTechnique.h"
// C/C++ Headers
#include <cassert>



class AxDCTAprxTechnique : public ::bellerophon::core::AprxTechnique 
{
public:
  // Default ctor
  AxDCTAprxTechnique (unsigned id,
                     const ::std::string NabId)
    : AprxTechnique (id),NabId(NabId) {
  }

  //*-------------------------------------------------------------------*
  // Get Methods
  //*-------------------------------------------------------------------*

  /// \brief Retrive Id
  /// \return the string ID
  const ::std::string& getNabId() const {
      return NabId;
  }

  //*-------------------------------------------------------------------*
  // Set Methods
  //*-------------------------------------------------------------------*

  /// \brief Set the Id
  /// \param The Id to set
  void setNabId ( const ::std::string& NabId ) {
      this->NabId = NabId;
  }
  /// \brief Set the OperandLHS
  /// \param The operand to set
  void setLHS ( const ::std::string lhs) {
    this->OperandLHS = lhs;
  }
  /// \brief Set the OperandRHS
  /// \param The operand to set
  void setRHS ( const ::std::string rhs) {
    this->OperandRHS = rhs;
  }

  //*-------------------------------------------------------------------*
  // Functional Methods 
  //*-------------------------------------------------------------------*

  /// \brief Provides a global value names 
  /// \details It provides the names of the global values that are required to be modified
  virtual ::std::vector<::std::string> getGlobalValueNames() const override;
  /// \brief Apply an approximation.
  /// \param The approximation grade
  /// \param Address of variable to modify
  /// \return String vector containing compiler arguments that represent the approximation
  virtual void applyApproximation ( ::bellerophon::core::AprxGrade,
                                    ::std::vector<uint64_t> ) const override;
  /// \brief Apply an approximation.
  /// \param The approximation grade
  /// \return String vector containing compiler arguments that represent the approximation
  virtual ::std::vector<::std::string> applyApproximation (
      ::bellerophon::core::AprxGrade g ) const override;
  /// \brief Dump information
  virtual void dump ( ::llvm::raw_ostream& out = ::llvm::outs() ) const override;

  ::std::string OperandLHS;
  ::std::string OperandRHS;

private:
  ::std::string NabId;        ///< Identifier of the operation
};

#endif /* INCLUDE_BELLEROPHON_AXDCTAPRXTECHNIQUE_H_ */
