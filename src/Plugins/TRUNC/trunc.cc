#include "Plugins/TRUNC/trunc.h"

uint8_t truncate::ax_integer::getMaxApprxGrade () const
{
  switch (internal_type)
  {
    case int8:  return 7U;
    case int16: return 15U;
    case int32: return 31U;
    case int64: return 63U;
    case uint8: return 8U;
    case uint16: return 16U;
    case uint32: return 32U;
    case uint64: return 64U;
    default: return 0U;
  }
}

truncate::ax_integer& truncate::ax_integer::operator+=(const ax_integer& rhs)
{
  // If both operands are signed or both are unsigned, the operand with lesser
  // conversion rank is converted to the operand with the greater integer
  // conversion rank.
  // For convenience, operands are converted either tu int64_t or uint64_t,
  // respectively.
  if (is_signed() && rhs.is_signed())
    actual_value = (((int64_t) (actual_value & apprx_mask)) + ((int64_t) (rhs.actual_value & rhs.apprx_mask)));
  else
  // or... (read below!)
  //if ( !is_signed() && !rhs.is_signed())
  //  return ((uint64_t) (actual_value & apprx_mask)) < ((uint64_t) (rhs.actual_value & rhs.apprx_mask));
  // Otherwise, if the unsigned operand's conversion rank is greater or equal to
  // the conversion rank of the signed operand, the signed operand is converted
  // to the unsigned operand's type.
  // In our case, this condition equals to the following.
  // Otherwise, both operands are converted to the unsigned counterpart of the
  // signed operand's type.
  // For convenience, operands are converted both to uint64_t.
    actual_value = (((uint64_t) (actual_value & apprx_mask)) + ((uint64_t) (rhs.actual_value & rhs.apprx_mask)));
  return *this;
}

truncate::ax_integer& truncate::ax_integer::operator-=(const ax_integer& rhs)
{
  // If both operands are signed or both are unsigned, the operand with lesser
  // conversion rank is converted to the operand with the greater integer
  // conversion rank.
  // For convenience, operands are converted either tu int64_t or uint64_t,
  // respectively.
  if (is_signed() && rhs.is_signed())
    actual_value = (((int64_t) (actual_value & apprx_mask)) - ((int64_t) (rhs.actual_value & rhs.apprx_mask)));
  else
  // or... (read below!)
  //if ( !is_signed() && !rhs.is_signed())
  //  return ((uint64_t) (actual_value & apprx_mask)) < ((uint64_t) (rhs.actual_value & rhs.apprx_mask));
  // Otherwise, if the unsigned operand's conversion rank is greater or equal to
  // the conversion rank of the signed operand, the signed operand is converted
  // to the unsigned operand's type.
  // In our case, this condition equals to the following.
  // Otherwise, both operands are converted to the unsigned counterpart of the
  // signed operand's type.
  // For convenience, operands are converted both to uint64_t.
    actual_value = (((uint64_t) (actual_value & apprx_mask)) - ((uint64_t) (rhs.actual_value & rhs.apprx_mask)));
  return *this;
}

truncate::ax_integer& truncate::ax_integer::operator*=(const ax_integer& rhs)
{
  // If both operands are signed or both are unsigned, the operand with lesser
  // conversion rank is converted to the operand with the greater integer
  // conversion rank.
  // For convenience, operands are converted either tu int64_t or uint64_t,
  // respectively.
  if (is_signed() && rhs.is_signed())
    actual_value = (((int64_t) (actual_value & apprx_mask)) * ((int64_t) (rhs.actual_value & rhs.apprx_mask)));
  else
    // or... (read below!)
    //if ( !is_signed() && !rhs.is_signed())
    //  return ((uint64_t) (actual_value & apprx_mask)) < ((uint64_t) (rhs.actual_value & rhs.apprx_mask));
    // Otherwise, if the unsigned operand's conversion rank is greater or equal to
    // the conversion rank of the signed operand, the signed operand is converted
    // to the unsigned operand's type.
    // In our case, this condition equals to the following.
    // Otherwise, both operands are converted to the unsigned counterpart of the
    // signed operand's type.
    // For convenience, operands are converted both to uint64_t.
    actual_value = (((uint64_t) (actual_value & apprx_mask)) * ((uint64_t) (rhs.actual_value & rhs.apprx_mask)));
  return *this;
}

truncate::ax_integer& truncate::ax_integer::operator/=(const ax_integer& rhs)
{
  // If both operands are signed or both are unsigned, the operand with lesser
  // conversion rank is converted to the operand with the greater integer
  // conversion rank.
  // For convenience, operands are converted either tu int64_t or uint64_t,
  // respectively.
  if (is_signed() && rhs.is_signed())
    actual_value = (((int64_t) (actual_value & apprx_mask)) / ((int64_t) (rhs.actual_value & rhs.apprx_mask)));
  else
    // or... (read below!)
    //if ( !is_signed() && !rhs.is_signed())
    //  return ((uint64_t) (actual_value & apprx_mask)) < ((uint64_t) (rhs.actual_value & rhs.apprx_mask));
    // Otherwise, if the unsigned operand's conversion rank is greater or equal to
    // the conversion rank of the signed operand, the signed operand is converted
    // to the unsigned operand's type.
    // In our case, this condition equals to the following.
    // Otherwise, both operands are converted to the unsigned counterpart of the
    // signed operand's type.
    // For convenience, operands are converted both to uint64_t.
    actual_value = (((uint64_t) (actual_value & apprx_mask)) / ((uint64_t) (rhs.actual_value & rhs.apprx_mask)));
  return *this;
}



truncate::ax_integer truncate::ax_integer::operator+(const ax_integer& rhs) const
{
  // If both operands are signed or both are unsigned, the operand with lesser
  // conversion rank is converted to the operand with the greater integer
  // conversion rank.
  // For convenience, operands are converted either tu int64_t or uint64_t,
  // respectively.
  if (is_signed() && rhs.is_signed())
    return ax_integer(
      nab < rhs.nab ? nab : rhs.nab,
      internal_type > rhs.internal_type ? internal_type : rhs.internal_type,
      (uint64_t)(((int64_t) (actual_value & apprx_mask)) + ((int64_t) (rhs.actual_value & rhs.apprx_mask))));
  else
    // or... (read below!)
    //if ( !is_signed() && !rhs.is_signed())
    //  return ((uint64_t) (actual_value & apprx_mask)) < ((uint64_t) (rhs.actual_value & rhs.apprx_mask));
    // Otherwise, if the unsigned operand's conversion rank is greater or equal to
    // the conversion rank of the signed operand, the signed operand is converted
    // to the unsigned operand's type.
    // In our case, this condition equals to the following.
    // Otherwise, both operands are converted to the unsigned counterpart of the
    // signed operand's type.
    // For convenience, operands are converted both to uint64_t.
    return ax_integer(
      nab < rhs.nab ? nab : rhs.nab,
      internal_type > rhs.internal_type ? internal_type : rhs.internal_type,
      (uint64_t)(((uint64_t) (actual_value & apprx_mask)) + ((uint64_t) (rhs.actual_value & rhs.apprx_mask))));
}

truncate::ax_integer truncate::ax_integer::operator-(const ax_integer& rhs) const
{
  // If both operands are signed or both are unsigned, the operand with lesser
  // conversion rank is converted to the operand with the greater integer
  // conversion rank.
  // For convenience, operands are converted either tu int64_t or uint64_t,
  // respectively.
  if (is_signed() && rhs.is_signed())
    return ax_integer(
      nab < rhs.nab ? nab : rhs.nab,
      internal_type > rhs.internal_type ? internal_type : rhs.internal_type,
      (uint64_t)(((int64_t) (actual_value & apprx_mask)) - ((int64_t) (rhs.actual_value & rhs.apprx_mask))));
  else
    // or... (read below!)
    //if ( !is_signed() && !rhs.is_signed())
    //  return ((uint64_t) (actual_value & apprx_mask)) < ((uint64_t) (rhs.actual_value & rhs.apprx_mask));
    // Otherwise, if the unsigned operand's conversion rank is greater or equal to
    // the conversion rank of the signed operand, the signed operand is converted
    // to the unsigned operand's type.
    // In our case, this condition equals to the following.
    // Otherwise, both operands are converted to the unsigned counterpart of the
    // signed operand's type.
    // For convenience, operands are converted both to uint64_t.
    return ax_integer(
      nab < rhs.nab ? nab : rhs.nab,
      internal_type > rhs.internal_type ? internal_type : rhs.internal_type,
      (uint64_t)(((uint64_t) (actual_value & apprx_mask)) - ((uint64_t) (rhs.actual_value & rhs.apprx_mask))));
}

truncate::ax_integer truncate::ax_integer::operator*(const ax_integer& rhs) const
{
  // If both operands are signed or both are unsigned, the operand with lesser
  // conversion rank is converted to the operand with the greater integer
  // conversion rank.
  // For convenience, operands are converted either tu int64_t or uint64_t,
  // respectively.
  if (is_signed() && rhs.is_signed())
    return ax_integer(
      nab < rhs.nab ? nab : rhs.nab,
      internal_type > rhs.internal_type ? internal_type : rhs.internal_type,
      (uint64_t)(((int64_t) (actual_value & apprx_mask)) * ((int64_t) (rhs.actual_value & rhs.apprx_mask))));
  else
    // or... (read below!)
    //if ( !is_signed() && !rhs.is_signed())
    //  return ((uint64_t) (actual_value & apprx_mask)) < ((uint64_t) (rhs.actual_value & rhs.apprx_mask));
    // Otherwise, if the unsigned operand's conversion rank is greater or equal to
    // the conversion rank of the signed operand, the signed operand is converted
    // to the unsigned operand's type.
    // In our case, this condition equals to the following.
    // Otherwise, both operands are converted to the unsigned counterpart of the
    // signed operand's type.
    // For convenience, operands are converted both to uint64_t.
    return ax_integer(
      nab < rhs.nab ? nab : rhs.nab,
      internal_type > rhs.internal_type ? internal_type : rhs.internal_type,
      (uint64_t)(((uint64_t) (actual_value & apprx_mask)) * ((uint64_t) (rhs.actual_value & rhs.apprx_mask))));
}

truncate::ax_integer truncate::ax_integer::operator/(const ax_integer& rhs) const
{
  // If both operands are signed or both are unsigned, the operand with lesser
  // conversion rank is converted to the operand with the greater integer
  // conversion rank.
  // For convenience, operands are converted either tu int64_t or uint64_t,
  // respectively.
  if (is_signed() && rhs.is_signed())
    return ax_integer(
      nab < rhs.nab ? nab : rhs.nab,
      internal_type > rhs.internal_type ? internal_type : rhs.internal_type,
      (uint64_t)(((int64_t) (actual_value & apprx_mask)) / ((int64_t) (rhs.actual_value & rhs.apprx_mask))));
  else
    // or... (read below!)
    //if ( !is_signed() && !rhs.is_signed())
    //  return ((uint64_t) (actual_value & apprx_mask)) < ((uint64_t) (rhs.actual_value & rhs.apprx_mask));
    // Otherwise, if the unsigned operand's conversion rank is greater or equal to
    // the conversion rank of the signed operand, the signed operand is converted
    // to the unsigned operand's type.
    // In our case, this condition equals to the following.
    // Otherwise, both operands are converted to the unsigned counterpart of the
    // signed operand's type.
    // For convenience, operands are converted both to uint64_t.
    return ax_integer(
      nab < rhs.nab ? nab : rhs.nab,
      internal_type > rhs.internal_type ? internal_type : rhs.internal_type,
      (uint64_t)(((uint64_t) (actual_value & apprx_mask)) / ((uint64_t) (rhs.actual_value & rhs.apprx_mask))));
}

bool truncate::ax_integer::operator==(const ax_integer& rhs) const
{
  if ((actual_value & apprx_mask) == (rhs.actual_value & rhs.apprx_mask))
    return true;
  return false;
}

bool truncate::ax_integer::operator< (const ax_integer& rhs) const
{
  // If both operands are signed or both are unsigned, the operand with lesser
  // conversion rank is converted to the operand with the greater integer
  // conversion rank.
  // For convenience, operands are converted either tu int64_t or uint64_t,
  // respectively.
  if (is_signed() && rhs.is_signed())
    return ((int64_t) (actual_value & apprx_mask)) < ((int64_t) (rhs.actual_value & rhs.apprx_mask));
  
  // or... (read below!)
  //if ( !is_signed() && !rhs.is_signed())
  //  return ((uint64_t) (actual_value & apprx_mask)) < ((uint64_t) (rhs.actual_value & rhs.apprx_mask));
  
  // Otherwise, if the unsigned operand's conversion rank is greater or equal to
  // the conversion rank of the signed operand, the signed operand is converted
  // to the unsigned operand's type.
  // In our case, this condition equals to the following.
  // Otherwise, both operands are converted to the unsigned counterpart of the
  // signed operand's type.
  // For convenience, operands are converted both to uint64_t.
  return ((uint64_t) (actual_value & apprx_mask)) < ((uint64_t) (rhs.actual_value & rhs.apprx_mask));
}

bool truncate::ax_integer::is_signed() const
{
  if (internal_type == int8 || internal_type == int16 || internal_type == int32 || internal_type == int64)
    return true;
  return false;
}