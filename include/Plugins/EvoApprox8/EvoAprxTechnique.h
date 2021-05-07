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

//===----------------------------------------------------------------------===//
/// \file TruncAprxTechnique.h
/// \author Salvatore Barone
/// \date  23 Ott 2020
/// \brief This file makes visible Approximate Context
//===----------------------------------------------------------------------===//
#ifndef INCLUDE_BELLEROPHON_EVOAPRX_TECHNIQUE_H_
#define INCLUDE_BELLEROPHON_EVOAPRX_TECHNIQUE_H_

// Tools Headers
#include "Core/AprxTechnique.h"
// C/C++ Headers
#include <cassert>

class EvoAprxTechnique : public ::bellerophon::core::AprxTechnique
{
  public:
  
    
    // Default ctor
    EvoAprxTechnique(unsigned id, const ::std::string opId, const ::std::string lhs, const ::std::string rhs, const ::std::string ty);
    
    //*-------------------------------------------------------------------*
    // Get Methods
    //*-------------------------------------------------------------------*
    
    /// \brief Retrive Id
    /// \return the string ID
    const ::std::string &getOpId () const
    {
      return OpId;
    }
   
    /// \brief Returns the left-hand-side operand
    /// \return
    const ::std::string & getOperandLHS() const
    {
      return OperandLHS;
    };
    
    /// \brief Returns the right-hand-side operand
    /// \return
    const ::std::string & getOperandRHS() const
    {
      return OperandRHS;
    }
    
    //*-------------------------------------------------------------------*
    // Set Methods
    //*-------------------------------------------------------------------*
    
    /// \brief Set the Id
    /// \param The Id to set
    void setOpId (const ::std::string &opId)
    {
      this->OpId = opId;
    }
    
    /// \brief Set the OperandLHS
    /// \param The operand to set
    void setLHS (const ::std::string lhs)
    {
      this->OperandLHS = lhs;
    }
    
    /// \brief Set the OperandRHS
    /// \param The operand to set
    void setRHS (const ::std::string rhs)
    {
      this->OperandRHS = rhs;
    }
    
    //*-------------------------------------------------------------------*
    // Functional Methods
    //*-------------------------------------------------------------------*
    
    /// \brief Provides a global value names
    /// \details It provides the names of the global values that are required to be modified
    virtual ::std::vector<::std::string> getGlobalValueNames () const override;
    
    /// \brief Apply an approximation.
    /// \param The approximation grade
    /// \param Address of variable to modify
    /// \return String vector containing compiler arguments that represent the approximation
    virtual void
    applyApproximation (
        ::bellerophon::core::AprxGrade,
        ::std::vector<uint64_t>
      ) const override;
    
    /// \brief Apply an approximation.
    /// \param The approximation grade
    /// \return String vector containing compiler arguments that represent the approximation
    virtual ::std::vector<::std::string> applyApproximation (
      ::bellerophon::core::AprxGrade g
    ) const override;
    
    /// \brief Dump information
    virtual void dump (::llvm::raw_ostream &out = ::llvm::outs ()) const override {}
  
  
  private:
    enum OperationType {ADD, SUB, MUL, DIV};
    
    ::std::string OpId;        ///< Identifier of the operation
    OperationType OpTy;        ///< Which operation
    ::std::string OperandLHS;
    ::std::string OperandRHS;
};

#endif /* INCLUDE_IIDEAA_FLAPAPRXTECHNIQUE_H_ */
