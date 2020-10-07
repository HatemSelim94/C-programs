#include "sort_array.h"

void sort_array(long ar[],long s32_array_size) 
{
    /*
     Inputs: array, array size
     this function takes array reference and array size then sorts the array in ascending order using bubble sort 
    */
    long s32_count,s32_count2,temp;
   for(s32_count2=0;s32_count2<s32_array_size-1;s32_count2++)
   {

      for(s32_count=0;s32_count<s32_array_size-1-s32_count2;s32_count++)
       {

          if(ar[s32_count]>ar[s32_count+1])
          {
            temp=ar[s32_count];
            ar[s32_count]=ar[s32_count+1];
            ar[s32_count+1]=temp;

          }


       }

   }

}