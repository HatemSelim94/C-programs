#include <stdio.h>
#include "sort_array.h"
int main()
{
    long Arr[]={5,3,4,-1,0,2,7,0,9};
    long s32_count,s32_size;
    // obtain array size
    s32_size=sizeof(Arr)/sizeof(Arr[0]);
    // sort the array
    sort_array(Arr,s32_size);
    // print the sorted array
    for(s32_count=0;s32_count<s32_size;s32_count++)
    {
        printf("element number %ld = %ld \n",s32_count+1,Arr[s32_count]);
    }
    return 0;
}
