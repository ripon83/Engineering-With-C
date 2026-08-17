/*
 * Program: Array As Function Argument 7
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
int *fn()
{
    int *ptr, i;
    ptr=(int*)malloc(SIZE*sizeof(int));  // Allocate memory dynamically
    printf("\nEnter elements:");  // Display output
    for(i=0; i<SIZE; i++)  // Iterate through array elements
    {
        scanf("%d", (ptr+i));  // Read input
    }
    return ptr;
}
int main()  // Main function: execution starts here
{
    int *p, i, sum=0;
    p=fn();
    for(i=0; i<SIZE; i++)  // Iterate through array elements
    {
        sum=sum+*(p+i);
    }
    printf("\nSUM=%d", sum);  // Display output
    return 0;  // Indicate successful program termination
}
