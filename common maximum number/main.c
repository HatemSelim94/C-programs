#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    int arr1[10]={1,2,6,7,3,14,2,3},arr2[5]={11,20,-2,20,14},size1=10,size2=5,res,st;
    st=find_max(arr1,size1,arr2,size2,&res);
    printf("The common maximum number between the given arrays is ");
    if(st)
    {
        printf("%d\n",res);
    }
    else
    {
        printf("not found\n");
    }
    return 0;
}
