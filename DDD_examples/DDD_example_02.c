#include "stdio.h"
#include "stdlib.h"

void main()
{
    int i, j, swp;

    #define SIZE 10
    int array[SIZE] = {11, 49, 78, 34, 94, 44, 55, 82, 28, 8};

    // Gotta love it - bubble sort
    // Display the array variable and watch it as you step
    // through the program.  Why does it not sort the list?
    // Set a breakpoint here and step through the array
    for (i = 1; i < SIZE; i++)
    {
        for (j = SIZE-1; j > i; j--)
        {
            if (array[j-1] > array[j])
            {
                swp = array[j-1];
                array[j-1] = array[j];
                array[j] = swp;
            }
        }
    }
    
    printf("The sorted list is:\n");
    printf("[ ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }

    printf("]\n");
}
         
