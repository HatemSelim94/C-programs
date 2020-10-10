#include "functions.h"

void sort(int arr[],int size)
{
    /*
    Inputs: 
    arr : the array that meant to be sorted.
    size: the size of the array.
    */
    int counter0,counter01,flag,temp;
    for(counter0=0;counter0<size;counter0++)
    {
        flag=0;
    for(counter01=counter0;counter01<size;counter01++)
        {
            if(arr[counter0]>arr[counter01])
            {
                temp=arr[counter0];
                arr[counter0]=arr[counter01];
                arr[counter01]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}

enum state find_max(int arr1[],int size1,int arr2[],int size2,int *res_ptr)
{
    /*
    Inputs:
    arr1: first array.
    size1: the size of the first array.
    arr2: second array.
    size2: the size of the second array.
    res_ptr: a pointer to the result variable.

    Outputs: 
    state: enum to show if the maximum common number is found(1) or not found(0).
    */
    sort(arr1,size1);
    int counter1,counter2;
    // loop through the sorted array in descending order 
    // compare the values to find the common number if there is any.
    for(counter1=size1-1;counter1>=0;counter1--)
    {
        for(counter2=0;counter2<size2;counter2++)
            if(arr1[counter1]==arr2[counter2])
        {
            *res_ptr=arr1[counter1];
            return found;
        }
    }

 return not_found;
}


