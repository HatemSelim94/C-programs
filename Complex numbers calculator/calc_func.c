#include "calc_func.h"

// complex numbers operations
// add
struct complex_num comp_add(struct complex_num comp_num1,struct complex_num comp_num2)
{
    struct complex_num res;
        res.real=comp_num1.real+comp_num2.real;
        res.img=comp_num1.img+comp_num2.img;
   return res;
}

// subtract

    struct complex_num comp_sub(struct complex_num comp_num1,struct complex_num comp_num2)
{
    struct complex_num res;

         res.real=comp_num1.real-comp_num2.real;
         res.img=comp_num1.img-comp_num2.img;
 return res;
}

// multiply

    struct complex_num comp_mul(struct complex_num comp_num1,struct complex_num comp_num2)
{
    struct complex_num res;
        res.real=comp_num1.real*comp_num2.real-comp_num1.img*comp_num2.img;
         res.img=comp_num1.real*comp_num2.img+comp_num2.real*comp_num1.img;
   return res;
}

// divide

 struct complex_num comp_div(struct complex_num comp_num1,struct complex_num comp_num2)
{
    struct complex_num res;
         res.real=(comp_num1.real*comp_num2.real+comp_num1.img*comp_num2.img)/(comp_num1.img*comp_num1.img+comp_num2.img*comp_num2.img);
         res.img=(comp_num1.img*comp_num2.real-comp_num2.img*comp_num1.real)/(comp_num1.img*comp_num1.img+comp_num2.img*comp_num2.img);
    return res;
}

// return conjugate

struct complex_num comp_conj(struct complex_num comp_num1)
{
    struct complex_num res;
    res=comp_num1;
    res.img*=-1;
        return res;
}



