#include <stdio.h>
#include <stdlib.h>
#include "calc_func.h"

int main()
{
    struct complex_num num1,num2,res;
    char sign;
while(1)
{
    printf("Please enter the required operation\n + , - , * , / , c (for conjugate) or e to exit\n\n");
    fflush(stdin);
    scanf("%c",&sign);
    if(sign=='e')
    {
        exit(0);
    }
    printf("Pleas enter the real part then the imaginary of the complex number\n");
    scanf("%f%f",&num1.real,&num1.img);
    if(sign!='c')
    {
    printf("Pleas enter the real part then the imaginary of the second complex number\n");
    scanf("%f%f",&num2.real,&num2.img);
    }

    switch(sign)
    {
    case'+':
         printf("\n ((%0.2f) + (%0.2f)i) +  ((%0.2f) + (%0.2f)i)  \n ",num1.real,num1.img,num2.real,num2.img);
        res=comp_add(num1,num2);
        break;
    case'-':
        printf("\n ((%0.2f) + (%0.2f)i) -  ((%0.2f) + (%0.2f)i)  \n ",num1.real,num1.img,num2.real,num2.img);
        res=comp_sub(num1,num2);
        break;
    case'*':
         printf("\n ((%0.2f) + (%0.2f)i) * ((%0.2f) + (%0.2f)i)  \n ",num1.real,num1.img,num2.real,num2.img);
        res=comp_mul(num1,num2);
        break;
    case'/':
        res=comp_div(num1,num2);
         printf("\n ((%0.2f) + (%0.2f)i) / ((%0.2f) + (%0.2f)i)  \n ",num1.real,num1.img,num2.real,num2.img);
        break;
    case'c':
        res=comp_conj(num1);
        printf("\nthe conjugate of (%0.2f) + (%0.2f)i   ",num1.real,num1.img);
        break;
    default:
        printf("Error,please choose a suitable sign ");
    }
printf("\n= (%0.2f) + (%0.2f) i\n\n",res.real,res.img);

}
    return 0;
}
