#ifndef VPA_N_H
#define VPA_N_H

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>


namespace vpa_n {

enum VPAPrecision{
	FLOAT,
	DOUBLE,
	LONG_DOUBLE
};

class VPA {
    /// @brief Class for Variable Precision Aritmetic
private:
  ::std::string name; ///< For debug purposes
  long double value;
  VPAPrecision prec;  ///< Information about the precision
 public:
   static bool UPCASTING;

  /// \{
  /// \brief Default ctor
  VPA(): name(""), value(0.0), prec(VPAPrecision()) {}

  /// @brief Conversion from float
  VPA(float f, VPAPrecision n_prec = FLOAT) {
    *this = f;
    this->changePrec(n_prec);
  }

  /// @brief Conversion from double
  VPA(double d, VPAPrecision n_prec = DOUBLE) {
    *this = d;
    this->changePrec(n_prec);
  }

  /// @brief Conversion from double
  VPA(long double ld, VPAPrecision n_prec = LONG_DOUBLE) {
    *this = ld;
    this->changePrec(n_prec);
  }
    
  VPA(VPA vpaObj, VPAPrecision n_prec) {
    *this = vpaObj;
    this->changePrec(n_prec);
  }

  /// \{
  // Getters and Setters

  VPAPrecision getPrec() const {
    return prec;
  }

  void setPrec(VPAPrecision prec) {
    this->prec = prec;
  }

  const ::std::string& getName() const {
    return name;
  }

  void setName(const ::std::string& name) {
    this->name = name;
  }

  const long double getValue() const {
    return value;
  }

  void setValue(const long double value) {
    this->value = value;
  }

  /// \}

  // Overloaded operators
  /// brief Conversion to float
  explicit operator float() const;
  /// brief Conversion to double
  explicit operator double() const;
  /// brief Conversion to long double
  explicit operator long double() const;

  // Assign operators
  VPA& operator=(float);
  VPA& operator=(double);
  VPA& operator=(long double);
  VPA& operator=(VPA);

  // Arithmetic operators
  // Each operations is done at the minimum precision between the operands
  VPA& operator+=(const VPA& fp);
  VPA& operator-=(const VPA& fp);
  VPA& operator*=(const VPA& fp);
  VPA& operator/=(const VPA& fp);

  friend VPA operator-(VPA lhs) {
    lhs.setValue(-lhs.getValue());
    return lhs;
  }

  friend VPA operator+(VPA lhs, const VPA& rhs) {
    lhs += rhs;
    return lhs;
  }

  friend VPA operator-(VPA lhs, const VPA& rhs) {
    lhs -= rhs;
    return lhs;
  }

  friend VPA operator*(VPA lhs, const VPA& rhs) {
    lhs *= rhs;
    return lhs;
  }

  friend VPA operator/(VPA lhs, const VPA& rhs) {
    lhs /= rhs;
    return lhs;
  }

  // Relational operators
  bool operator<=(const VPA& rhs) {
    return static_cast<long double>(*this) <= static_cast<long double>(rhs);
  }
  bool operator<(const VPA& rhs) {
    return static_cast<long double>(*this) < static_cast<long double>(rhs);
  }
  bool operator>=(const VPA& rhs) {
    return static_cast<long double>(*this) >= static_cast<long double>(rhs);
  }
  bool operator>(const VPA& rhs) {
    return static_cast<long double>(*this) > static_cast<long double>(rhs);
  }

  void adaptPrec(VPA&);
  void changePrec(VPAPrecision);
};

}

::std::ostream& operator<<(::std::ostream&, const ::vpa_n::VPA&);


#endif //VPA_N_H
