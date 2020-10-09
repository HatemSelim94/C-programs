#include <stdio.h>
#include <stdlib.h>
#include "binsearch2d.h"

int main(void)
{
    int counter=0; // counts how often bins2d is called
    int size, loop_counter1,loop_counter2;
    int asterisk_row, asterisk_col; // asterisk index
    printf("enter size\n");
    scanf("%d",&size);  // get size
    printf("enter elements\n");
    //reserver location for elements
    int **array;
    array = malloc(size* sizeof *array);

    for (loop_counter1=0; loop_counter1<size; loop_counter1++)
    {
        array[loop_counter1] = malloc(size * sizeof *array[loop_counter1]);
        }

    for(loop_counter1=0;loop_counter1<size;loop_counter1++)
    {
        for(loop_counter2=0;loop_counter2<size;loop_counter2++)
        {
            //get elements
            scanf("%d",&(array[loop_counter1][loop_counter2]));
            fflush(stdin);
            }
    }
    bins2d(&asterisk_row,&asterisk_col,array,0,size,0,size,&counter); //find asterisk location (row and column)

    //print asterisk location and the function counter
    printf("\n%d,%d\n%d\n",asterisk_row,asterisk_col,counter);
    //free reserved space
    for (loop_counter1=0; loop_counter1<size; loop_counter1++)
  {
    free(array[loop_counter1]);
  }
    free(array);
    return 0;
}


