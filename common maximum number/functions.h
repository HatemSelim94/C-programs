#ifndef FUNCTIONS_INCLUDED
#define FUNCTIONS_INCLUDED
enum state{
    not_found,
    found
}state;
void sort(int arr[],int size);
enum state find_max(int arr1[],int size1,int arr2[],int size2,int *res_ptr);
#endif //FUNCTIONS_C