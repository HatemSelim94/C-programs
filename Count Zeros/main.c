/* a program to count maximum number of zeros in a number (between ones) ex:
 10d >>> 1010 b
 counter=1
 9d >>> 1001 b
 counter=2
 100100100001 b
 counter= 4
 --------------------
 maximum 32 bit number
*/
#include <stdio.h>
int main()
{
int number,loop_counter,zeros_counter,max_number_of_zeros;
while(1)
{
zeros_counter=0,max_number_of_zeros=0;     //counter and max start with zero

printf("enter x\n");
scanf("%d",&number);                      // get the number
int copy_number = number;
while((number!=0)&&(number!=1)&&(number!=0xFFFFFFFF))// if the number equal zero or 1 or it does not contain any zeros
//(shift right puts ones(not zeros) from the right side if the number is negative)
{
    if((number&1)==1)
    {
    zeros_counter=0; // if we find 1 in the first bit reset zeros counter
    number>>=1; // shift right to start counting zeros if it exist
    for(loop_counter=0;loop_counter<31;loop_counter++) //
    {
        if((number&1)==1)
        {
            break; // break if we find 1
        }
    if((loop_counter&1)==0)
    {
        zeros_counter++; // count if we find 0
        number>>=1;      // swipe right to continue
    }

    }
    if(zeros_counter>max_number_of_zeros)
    {
        max_number_of_zeros=zeros_counter;
    }
    }
    else  // if the first bit is 0 then shift till we find a one
        number>>=1;


}
printf("maximum number of zeros between ones in %d is %d\n",copy_number,max_number_of_zeros);
}
    return 0;

}
