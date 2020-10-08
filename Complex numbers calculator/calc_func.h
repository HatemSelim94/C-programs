#ifndef CALC_FUNC_H_INCLUDED
#define CALC_FUNC_H_INCLUDED
struct complex_num
{
    float real;
    float img;
};

struct complex_num comp_add(struct complex_num comp_num1,struct complex_num comp_num2);
struct complex_num comp_sub(struct complex_num comp_num1,struct complex_num comp_num2);
struct complex_num comp_mul(struct complex_num comp_num1,struct complex_num comp_num2);
struct complex_num comp_div(struct complex_num comp_num1,struct complex_num comp_num2);
struct complex_num comp_conj(struct complex_num comp_num1);





#endif // CALC_FUNC_H_INCLUDED
