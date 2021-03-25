#ifndef EVOAPPROXLIB_H
#define EVOAPPROXLIB_H

#include <inttypes.h>

namespace evoapproxlib{


class evoapprox_u8_t
{
public:
    explicit evoapprox_u8_t(uint8_t value, uint32_t component) : actual_value(value), approx_component(component) {}
    evoapprox_u8_t operator+(const evoapprox_u8_t& rhs) const {return evoapprox_u8_t((uint8_t)add8u(actual_value, rhs.actual_value, approx_component), approx_component);}
    evoapprox_u8_t operator*(const evoapprox_u8_t& rhs) const {return evoapprox_u8_t((uint8_t)mul8u(actual_value, rhs.actual_value, approx_component), approx_component);};
    operator int8_t() const   {return (int8_t)   (actual_value);}
    operator int16_t() const  {return (int16_t)  (actual_value);}
    operator int32_t() const  {return (int32_t)  (actual_value);}
    operator int64_t() const  {return (int64_t)  (actual_value);}
    operator uint8_t() const  {return (uint8_t)  (actual_value);}
    operator uint16_t() const {return (uint16_t) (actual_value);}
    operator uint32_t() const {return (uint32_t) (actual_value);}
    operator uint64_t() const {return (uint64_t) (actual_value);}
    static uint8_t add8u (uint8_t addendum1, uint8_t addendum2, uint32_t apprx_component);
    static double add8u_power(uint32_t approx_component);
    static double add8u_area(uint32_t approx_component);
    static uint16_t mul8u (uint8_t multiplicand, uint8_t multiplier, uint32_t apprx_component);
    static double mul8u_power(uint32_t approx_component);
    static double mul8u_area(uint32_t approx_component);
private:
    uint8_t actual_value;
    uint32_t approx_component;
};

class evoapprox_s8_t
{
public:
    explicit evoapprox_s8_t(uint8_t value, uint32_t component) : actual_value(value), approx_component(component) {}
    evoapprox_s8_t operator+(const evoapprox_s8_t& rhs) const {return evoapprox_s8_t((uint8_t)add8s(actual_value, rhs.actual_value, approx_component), approx_component);}
    evoapprox_s8_t operator*(const evoapprox_s8_t& rhs) const {return evoapprox_s8_t((uint8_t)mul8s(actual_value, rhs.actual_value, approx_component), approx_component);};
    operator int8_t() const   {return (int8_t)   (actual_value);}
    operator int16_t() const  {return (int16_t)  (actual_value);}
    operator int32_t() const  {return (int32_t)  (actual_value);}
    operator int64_t() const  {return (int64_t)  (actual_value);}
    operator uint8_t() const  {return (uint8_t)  (actual_value);}
    operator uint16_t() const {return (uint16_t) (actual_value);}
    operator uint32_t() const {return (uint32_t) (actual_value);}
    operator uint64_t() const {return (uint64_t) (actual_value);}
    static int8_t add8s (int8_t addendum1, int8_t addendum2, uint32_t apprx_component);
    static double add8s_power(uint32_t approx_component);
    static double add8s_area(uint32_t approx_component);
    static int16_t mul8s (int8_t multiplicand, int8_t multiplier, uint32_t apprx_component);
    static double mul8s_power(uint32_t approx_component);
    static double mul8s_area(uint32_t approx_component);
private:
    uint8_t actual_value;
    uint32_t approx_component;
};



}

#endif