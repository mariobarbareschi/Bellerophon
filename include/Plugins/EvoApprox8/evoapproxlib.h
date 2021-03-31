#ifndef EVOAPPROXLIB_HEADER_H
#define EVOAPPROXLIB_HEADER_H

#include <inttypes.h>
#include <assert.h>
namespace evoapproxlib {

class evoapprox_t
{
public:
    explicit evoapprox_t(int8_t   value, uint8_t ax_component) : internal_type(int8),   actual_value(value), approx_component(ax_component) {}
    explicit evoapprox_t(uint8_t  value, uint8_t ax_component) : internal_type(uint8),  actual_value(value), approx_component(ax_component) {}
    explicit evoapprox_t(int16_t  value, uint8_t ax_component) : internal_type(int16),  actual_value(value), approx_component(ax_component) {}
    explicit evoapprox_t(uint16_t value, uint8_t ax_component) : internal_type(uint16), actual_value(value), approx_component(ax_component) {}

    evoapprox_t& operator=(int8_t   value) {internal_type = int8;   actual_value = (uint64_t)value;}
    evoapprox_t& operator=(uint8_t  value) {internal_type = uint8;  actual_value = (uint64_t)value;}
    evoapprox_t& operator=(int16_t  value) {internal_type = int16;  actual_value = (uint64_t)value;}
    evoapprox_t& operator=(uint16_t value) {internal_type = uint16; actual_value = (uint64_t)value;}
    
    evoapprox_t operator+(const evoapprox_t& rhs) const;
    evoapprox_t operator*(const evoapprox_t& rhs) const;

    operator int8_t() const   {return (int8_t)   (actual_value);}
    operator int16_t() const  {return (int16_t)  (actual_value);}
    operator int32_t() const  {return (int32_t)  (actual_value);}
    operator int64_t() const  {return (int64_t)  (actual_value);}
    operator uint8_t() const  {return (uint8_t)  (actual_value);}
    operator uint16_t() const {return (uint16_t) (actual_value);}
    operator uint32_t() const {return (uint32_t) (actual_value);}
    operator uint64_t() const {return (uint64_t) (actual_value);}

    float getAddArea() const;
    float getAddPower() const;
    float getMulArea() const;
    float getMulPower() const;

    static float add8s_power (uint8_t ax_comp) {assert(ax_comp < add_8s_N);  return add_8s_array[ax_comp].power;}
    static float add8s_area  (uint8_t ax_comp) {assert(ax_comp < add_8s_N);  return add_8s_array[ax_comp].area;}
    static float mul8s_power (uint8_t ax_comp) {assert(ax_comp < mult_8s_N); return mult_8s_array[ax_comp].power;}
    static float mul8s_area  (uint8_t ax_comp) {assert(ax_comp < mult_8s_N); return mult_8s_array[ax_comp].area;}
    static float add8u_power (uint8_t ax_comp) {assert(ax_comp < add_8u_N);  return add_8s_array[ax_comp].power;}
    static float add8u_area  (uint8_t ax_comp) {assert(ax_comp < add_8u_N);  return add_8s_array[ax_comp].area;}
    static float mul8u_power (uint8_t ax_comp) {assert(ax_comp < mult_8u_N); return mult_8u_array[ax_comp].power;}
    static float mul8u_area  (uint8_t ax_comp) {assert(ax_comp < mult_8u_N); return mult_8u_array[ax_comp].area;}
    static float add16s_power(uint8_t ax_comp) {assert(ax_comp < add_16s_N); return add_16s_array[ax_comp].power;}
    static float add16s_area (uint8_t ax_comp) {assert(ax_comp < add_16s_N); return add_16s_array[ax_comp].area;}
    static float mul16s_power(uint8_t ax_comp) {assert(ax_comp < add_16s_N); return mul_16s_array[ax_comp].power;}
    static float mul16s_area (uint8_t ax_comp) {assert(ax_comp < add_16s_N); return mul_16s_array[ax_comp].area;}
    static float add16u_power(uint8_t ax_comp) {assert(ax_comp < add_16u_N); return add_16u_array[ax_comp].power;}
    static float add16u_area (uint8_t ax_comp) {assert(ax_comp < add_16u_N); return add_16u_array[ax_comp].area;}
    static float mul16u_power(uint8_t ax_comp) {assert(ax_comp < add_16u_N); return mul_16u_array[ax_comp].power;}
    static float mul16u_area (uint8_t ax_comp) {assert(ax_comp < add_16u_N); return mul_16u_array[ax_comp].area;}


private:
    enum internal_type_t{int8, int16, uint8, uint16};
    internal_type_t internal_type;
    uint64_t actual_value;
    uint8_t approx_component;

    explicit evoapprox_t(internal_type_t type, uint64_t value, uint8_t ax_component) : internal_type(type), actual_value(value), approx_component(ax_component) {}

    inline bool is_signed() const;

    int8_t add8s (int8_t addendum1, int8_t addendum2) const;
    int16_t mul8s (int8_t multiplicand, int8_t multiplier) const;

    uint8_t add8u (uint8_t addendum1, uint8_t addendum2) const;
    uint16_t mul8u (uint8_t multiplicand, uint8_t multiplier) const;
    
    int16_t add16s (int16_t addendum1, int16_t addendum2) const;
    int32_t mul16s (int16_t multiplicand, int16_t multiplier) const;

    uint16_t add16u (uint16_t addendum1, uint16_t addendum2) const;
    uint32_t mul16u (uint16_t multiplicand, uint16_t multiplier) const;
    
    float add8s_power() const;
    float add8s_area() const;
    float mul8s_power() const;
    float mul8s_area() const;
    float add8u_power() const;
    float add8u_area() const;
    float mul8u_power() const;
    float mul8u_area() const;
    float add16s_power() const;
    float add16s_area() const;
    float mul16s_power() const;
    float mul16s_area() const;
    float add16u_power() const;
    float add16u_area() const;
    float mul16u_power() const;
    float mul16u_area() const;

    typedef uint64_t(*add8u_fptr)(uint64_t, uint64_t);
    typedef struct {
        add8u_fptr fptr;
        float power;
        float area;
    } add_8u_t;
    static const int add_8u_N = 32;
    static add_8u_t add_8u_array[add_8u_N];

    static uint64_t add8u_exa(uint64_t a, uint64_t b);
    static uint64_t add8u_5SY(uint64_t a, uint64_t b);
    static uint64_t add8u_0FP(uint64_t a, uint64_t b);
    static uint64_t add8u_88L(uint64_t a, uint64_t b);
    static uint64_t add8u_8MK(uint64_t a, uint64_t b);
    static uint64_t add8u_01R(uint64_t a, uint64_t b);
    static uint64_t add8u_5LT(uint64_t a, uint64_t b);
    static uint64_t add8u_1DK(uint64_t a, uint64_t b);
    static uint64_t add8u_8AS(uint64_t a, uint64_t b);
    static uint64_t add8u_5HQ(uint64_t a, uint64_t b);
    static uint64_t add8u_5ME(uint64_t a, uint64_t b);
    static uint64_t add8u_0CA(uint64_t a, uint64_t b);
    static uint64_t add8u_5M7(uint64_t a, uint64_t b);
    static uint64_t add8u_4T8(uint64_t a, uint64_t b);
    static uint64_t add8u_2XT(uint64_t a, uint64_t b);
    static uint64_t add8u_5QL(uint64_t a, uint64_t b);
    static uint64_t add8u_8LL(uint64_t a, uint64_t b);
    static uint64_t add8u_8BB(uint64_t a, uint64_t b);
    static uint64_t add8u_8FF(uint64_t a, uint64_t b);
    static uint64_t add8u_8KZ(uint64_t a, uint64_t b);
    static uint64_t add8u_5R3(uint64_t a, uint64_t b);
    static uint64_t add8u_8GM(uint64_t a, uint64_t b);
    static uint64_t add8u_5EZ(uint64_t a, uint64_t b);
    static uint64_t add8u_8KJ(uint64_t a, uint64_t b);
    static uint64_t add8u_8ES(uint64_t a, uint64_t b);
    static uint64_t add8u_5NH(uint64_t a, uint64_t b);
    static uint64_t add8u_0H4(uint64_t a, uint64_t b);
    static uint64_t add8u_8FD(uint64_t a, uint64_t b);
    static uint64_t add8u_04A(uint64_t a, uint64_t b);
    static uint64_t add8u_5NQ(uint64_t a, uint64_t b);
    static uint64_t add8u_006(uint64_t a, uint64_t b);
    static uint64_t add8u_5G5(uint64_t a, uint64_t b);

    typedef uint64_t(*mul8u_fptr)(uint64_t, uint64_t);
    typedef struct {
        mul8u_fptr fptr;
        float power;
        float area;
    } mult_8u_t;
    static const int mult_8u_N = 37;
    static mult_8u_t mult_8u_array[mult_8u_N];

    static uint64_t mul8u_exa (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_L40 (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_RCG (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_1CMB(const uint64_t B,const uint64_t A);
    static uint64_t mul8u_CK5 (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_17KS(const uint64_t B,const uint64_t A);
    static uint64_t mul8u_KEM (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_JV3 (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_FTA (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_125K(const uint64_t B,const uint64_t A);
    static uint64_t mul8u_2AC (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_JQQ (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_QKX (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_1AGV(const uint64_t B,const uint64_t A);
    static uint64_t mul8u_150Q(const uint64_t B,const uint64_t A);
    static uint64_t mul8u_Y48 (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_1446(const uint64_t B,const uint64_t A);
    static uint64_t mul8u_18DU(const uint64_t B,const uint64_t A);
    static uint64_t mul8u_13QR(const uint64_t B,const uint64_t A);
    static uint64_t mul8u_7C1 (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_GS2 (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_1JFF(const uint64_t a,const uint64_t b);
    static uint64_t mul8u_LM7 (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_ZFB (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_DM1 (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_19DB(const uint64_t B,const uint64_t A);
    static uint64_t mul8u_12N4(const uint64_t B,const uint64_t A);
    static uint64_t mul8u_17C8(const uint64_t B,const uint64_t A);
    static uint64_t mul8u_E9R (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_NGR (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_17QU(const uint64_t B,const uint64_t A);
    static uint64_t mul8u_14VP(const uint64_t B,const uint64_t A);
    static uint64_t mul8u_QJD (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_2HH (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_2P7 (const uint64_t B,const uint64_t A);
    static uint64_t mul8u_185Q(const uint64_t B,const uint64_t A);
    static uint64_t mul8u_YX7 (const uint64_t B,const uint64_t A);

    typedef uint64_t(*add8s_fptr)(uint64_t, uint64_t);
    typedef struct {
        add8s_fptr fptr;
        float power;
        float area;
    } add_8s_t;
    static const int add_8s_N = 57;
    static add_8s_t add_8s_array[add_8s_N];

    static uint64_t add8s_exa (const uint64_t B,const uint64_t A);
    static uint64_t add8s_6S5 (const uint64_t B,const uint64_t A);
    static uint64_t add8s_6XL (const uint64_t B,const uint64_t A);
    static uint64_t add8s_6J2 (const uint64_t A,const uint64_t B);
    static uint64_t add8s_6T8 (const uint64_t B,const uint64_t A);
    static uint64_t add8s_70F (const uint64_t B,const uint64_t A);
    static uint64_t add8s_6ZP (const uint64_t A,const uint64_t B);
    static uint64_t add8s_6QJ (const uint64_t B,const uint64_t A);
    static uint64_t add8s_6UN (const uint64_t B,const uint64_t A);
    static uint64_t add8s_701 (const uint64_t A,const uint64_t B);
    static uint64_t add8s_6R6 (const uint64_t B,const uint64_t A);
    static uint64_t add8s_704 (const uint64_t B,const uint64_t A);
    static uint64_t add8s_7YK (const uint64_t B,const uint64_t A);
    static uint64_t add8s_83N (const uint64_t B,const uint64_t A);
    static uint64_t add8s_6FR (const uint64_t B,const uint64_t A);
    static uint64_t add8s_70Z (const uint64_t B,const uint64_t A);
    static uint64_t add8s_6H2 (const uint64_t A,const uint64_t B);
    static uint64_t add8s_83C (const uint64_t B,const uint64_t A);
    static uint64_t add8s_6FC (const uint64_t B,const uint64_t A);
    static uint64_t add8s_6TR (const uint64_t A,const uint64_t B);
    static uint64_t add8s_6PA (const uint64_t B,const uint64_t A);
    static uint64_t add8s_6PM (const uint64_t A,const uint64_t B);
    static uint64_t add8s_6UC (const uint64_t B,const uint64_t A);
    static uint64_t add8s_6TN (const uint64_t B,const uint64_t A);
    static uint64_t add8s_6YE (const uint64_t B,const uint64_t A);
    static uint64_t add8s_6X9 (const uint64_t A,const uint64_t B);
    static uint64_t add8s_6SN (const uint64_t A,const uint64_t B);
    static uint64_t add8s_6HF (const uint64_t B,const uint64_t A);
    static uint64_t add8s_6YG (const uint64_t B,const uint64_t A);
    static uint64_t add8s_6X7 (const uint64_t A,const uint64_t B);
    static uint64_t add8s_70S (const uint64_t B,const uint64_t A);
    static uint64_t add8se_8UF(const uint64_t B,const uint64_t A);
    static uint64_t add8se_8XS(const uint64_t B,const uint64_t A);
    static uint64_t add8se_91X(const uint64_t B,const uint64_t A);
    static uint64_t add8se_8UN(const uint64_t B,const uint64_t A);
    static uint64_t add8se_8VV(const uint64_t B,const uint64_t A);
    static uint64_t add8se_8UT(const uint64_t B,const uint64_t A);
    static uint64_t add8se_90R(const uint64_t B,const uint64_t A);
    static uint64_t add8se_8ZX(const uint64_t B,const uint64_t A);
    static uint64_t add8se_7A2(const uint64_t B,const uint64_t A);
    static uint64_t add8se_91V(const uint64_t B,const uint64_t A);
    static uint64_t add8se_8YC(const uint64_t B,const uint64_t A);
    static uint64_t add8se_72D(const uint64_t B,const uint64_t A);
    static uint64_t add8se_7C9(const uint64_t B,const uint64_t A);
    static uint64_t add8se_8V4(const uint64_t B,const uint64_t A);
    static uint64_t add8se_8TX(const uint64_t B,const uint64_t A);
    static uint64_t add8se_92J(const uint64_t B,const uint64_t A);
    static uint64_t add8se_90Z(const uint64_t B,const uint64_t A);
    static uint64_t add8se_91Y(const uint64_t B,const uint64_t A);
    static uint64_t add8se_90X(const uint64_t B,const uint64_t A);
    static uint64_t add8se_91D(const uint64_t B,const uint64_t A);
    static uint64_t add8se_78P(const uint64_t B,const uint64_t A);
    static uint64_t add8se_7N1(const uint64_t B,const uint64_t A);
    static uint64_t add8se_76P(const uint64_t B,const uint64_t A);
    static uint64_t add8se_8ZU(const uint64_t B,const uint64_t A);
    static uint64_t add8se_90J(const uint64_t B,const uint64_t A);
    static uint64_t add8se_7LN(const uint64_t B,const uint64_t A);
    static uint64_t add8se_7J7(const uint64_t B,const uint64_t A);

    typedef int16_t(*mul8s_fptr)(int8_t, int8_t);
    typedef struct {
        mul8s_fptr fptr;
        double power;
        double area;
    } mult_8s_t;
    static const int mult_8s_N = 14;
    static mult_8s_t mult_8s_array[mult_8s_N];

    static int16_t  mul8s_exa (int8_t A, int8_t B);
    static int16_t  mul8s_1KVB(int8_t A, int8_t B);
    static int16_t  mul8s_1KVL(int8_t A, int8_t B);
    static int16_t  mul8s_1KX2(int8_t A, int8_t B);
    static int16_t  mul8s_1KVA(int8_t A, int8_t B);
    static int16_t  mul8s_1KR6(int8_t A, int8_t B);
    static int16_t  mul8s_1L2H(int8_t A, int8_t B);
    static int16_t  mul8s_1L2D(int8_t A, int8_t B);
    static int16_t  mul8s_1KR8(int8_t A, int8_t B);
    static int16_t  mul8s_1KV8(int8_t A, int8_t B);
    static int16_t  mul8s_1L1G(int8_t A, int8_t B);
    static int16_t  mul8s_1KTY(int8_t A, int8_t B);
    static int16_t  mul8s_1KR3(int8_t A, int8_t B);
    static int16_t  mul8s_1KRC(int8_t A, int8_t B);

    typedef uint64_t(*add16u_fptr)(uint64_t, uint64_t);
    typedef struct {
        add16u_fptr fptr;
        float power;
        float area;
    } add_16u_t;
    static const int add_16u_N = 31;
    static add_16u_t add_16u_array[add_16u_N];
    
    static uint64_t add16u_exa(uint64_t a, uint64_t b);
    static uint64_t add16u_1US(uint64_t a, uint64_t b);
    static uint64_t add16u_02U(uint64_t a, uint64_t b);
    static uint64_t add16u_1B4(uint64_t a, uint64_t b);
    static uint64_t add16u_0DL(uint64_t a, uint64_t b);
    static uint64_t add16u_0Q7(uint64_t a, uint64_t b);
    static uint64_t add16u_1NN(uint64_t a, uint64_t b);
    static uint64_t add16u_1MB(uint64_t a, uint64_t b);
    static uint64_t add16u_1DM(uint64_t a, uint64_t b);
    static uint64_t add16u_0QC(uint64_t a, uint64_t b);
    static uint64_t add16u_09P(uint64_t a, uint64_t b);
    static uint64_t add16u_0RN(uint64_t a, uint64_t b);
    static uint64_t add16u_0FJ(uint64_t a, uint64_t b);
    static uint64_t add16u_0EM(uint64_t a, uint64_t b);
    static uint64_t add16u_0KC(uint64_t a, uint64_t b);
    static uint64_t add16u_073(uint64_t a, uint64_t b);
    static uint64_t add16u_0MH(uint64_t a, uint64_t b);
    static uint64_t add16u_0M0(uint64_t a, uint64_t b);
    static uint64_t add16u_0B4(uint64_t a, uint64_t b);
    static uint64_t add16u_1X9(uint64_t a, uint64_t b);
    static uint64_t add16u_0GK(uint64_t a, uint64_t b);
    static uint64_t add16u_02E(uint64_t a, uint64_t b);
    static uint64_t add16u_08F(uint64_t a, uint64_t b);
    static uint64_t add16u_0NK(uint64_t a, uint64_t b);
    static uint64_t add16u_0QG(uint64_t a, uint64_t b);
    static uint64_t add16u_0M6(uint64_t a, uint64_t b);
    static uint64_t add16u_00G(uint64_t a, uint64_t b);
    static uint64_t add16u_1E2(uint64_t a, uint64_t b);
    static uint64_t add16u_1JH(uint64_t a, uint64_t b);
    static uint64_t add16u_1HK(uint64_t a, uint64_t b);
    static uint64_t add16u_05T(uint64_t a, uint64_t b);

    typedef uint32_t(*mul16u_fptr)(uint16_t, uint16_t);
    typedef struct {
        mul16u_fptr fptr;
        float power;
        float area;
    } mul_16u_t;
    static const int mul_16u_N = 32;
    static mul_16u_t mul_16u_array[mul_16u_N];

    static uint32_t mul16u_exa (uint16_t a, uint16_t b);
    static uint32_t mul16u_C37 (uint16_t a, uint16_t b);
    static uint32_t mul16u_FGL (uint16_t a, uint16_t b);
    static uint32_t mul16u_0ZG (uint16_t A, uint16_t B);
    static uint32_t mul16u_CK3 (uint16_t a, uint16_t b);
    static uint32_t mul16u_6NY (uint16_t a, uint16_t b);
    static uint32_t mul16u_BMC (uint16_t a, uint16_t b);
    static uint32_t mul16u_GPE (uint16_t A, uint16_t B);
    static uint32_t mul16u_CG0 (uint16_t a, uint16_t b);
    static uint32_t mul16u_94L (uint16_t a, uint16_t b);
    static uint32_t mul16u_5FA (uint16_t a, uint16_t b);
    static uint32_t mul16u_FGN (uint16_t a, uint16_t b);
    static uint32_t mul16u_3BB (uint16_t a, uint16_t b);
    static uint32_t mul16u_G9P (uint16_t A, uint16_t B);
    static uint32_t mul16u_H6G (uint16_t A, uint16_t B);
    static uint32_t mul16u_GZ7 (uint16_t A, uint16_t B);
    static uint32_t mul16u_DAE (uint16_t a, uint16_t b);
    static uint32_t mul16u_8VH (uint16_t a, uint16_t b);
    static uint32_t mul16u_52B (uint16_t a, uint16_t b);
    static uint32_t mul16u_34S (uint16_t a, uint16_t b);
    static uint32_t mul16u_EHF (uint16_t a, uint16_t b);
    static uint32_t mul16u_AQ1 (uint16_t a, uint16_t b);
    static uint32_t mul16u_GPF (uint16_t A, uint16_t B);
    static uint32_t mul16u_HF0 (uint16_t A, uint16_t B);
    static uint32_t mul16u_HGK (uint16_t A, uint16_t B);
    static uint32_t mul16u_F6B (uint16_t a, uint16_t b);
    static uint32_t mul16u_A7Z (uint16_t a, uint16_t b);
    static uint32_t mul16u_HGP (uint16_t A, uint16_t B);
    static uint32_t mul16u_4YJ (uint16_t a, uint16_t b);
    static uint32_t mul16u_3HJ (uint16_t a, uint16_t b);
    static uint32_t mul16u_60L (uint16_t a, uint16_t b);
    static uint32_t mul16u_679 (uint16_t a, uint16_t b);

    typedef uint64_t(*add16s_fptr)(uint64_t, uint64_t);
    typedef struct {
        add16s_fptr fptr;
        float power;
        float area;
    } add_16s_t;
    static const int add_16s_N = 19;
    static add_16s_t add_16s_array[add_16s_N];

    static uint64_t add16se_exa(const uint64_t B,const uint64_t A);
    static uint64_t add16se_294(const uint64_t B,const uint64_t A);
    static uint64_t add16se_28H(const uint64_t B,const uint64_t A);
    static uint64_t add16se_2E1(const uint64_t B,const uint64_t A);
    static uint64_t add16se_2H0(const uint64_t B,const uint64_t A);
    static uint64_t add16se_2JB(const uint64_t B,const uint64_t A);
    static uint64_t add16se_26Q(const uint64_t B,const uint64_t A);
    static uint64_t add16se_2GE(const uint64_t B,const uint64_t A);
    static uint64_t add16se_259(const uint64_t B,const uint64_t A);
    static uint64_t add16se_2AS(const uint64_t B,const uint64_t A);
    static uint64_t add16se_29A(const uint64_t B,const uint64_t A);
    static uint64_t add16se_20J(const uint64_t B,const uint64_t A);
    static uint64_t add16se_2LJ(const uint64_t B,const uint64_t A);
    static uint64_t add16se_2DN(const uint64_t B,const uint64_t A);
    static uint64_t add16se_2BY(const uint64_t B,const uint64_t A);
    static uint64_t add16se_2KV(const uint64_t B,const uint64_t A);
    static uint64_t add16se_2JY(const uint64_t B,const uint64_t A);
    static uint64_t add16se_25S(const uint64_t B,const uint64_t A);
    static uint64_t add16se_1Y7(const uint64_t B,const uint64_t A);

    typedef int32_t(*mul16s_fptr)(int16_t, int16_t);
    typedef struct {
        mul16s_fptr fptr;
        float power;
        float area;
    } mul_16s_t;
    static const int mul_16s_N = 10;
    static mul_16s_t mul_16s_array[mul_16s_N];

    static int32_t mul16s_exa(int16_t A, int16_t B);
    static int32_t mul16s_G80(int16_t A, int16_t B);
    static int32_t mul16s_HEB(int16_t A, int16_t B);
    static int32_t mul16s_G7F(int16_t A, int16_t B);
    static int32_t mul16s_HDG(int16_t A, int16_t B);
    static int32_t mul16s_GK2(int16_t A, int16_t B);
    static int32_t mul16s_HFZ(int16_t A, int16_t B);
    static int32_t mul16s_GAT(int16_t A, int16_t B);
    static int32_t mul16s_G7Z(int16_t A, int16_t B);
    static int32_t mul16s_HHP(int16_t A, int16_t B);
};

}

#endif
