/*
 * Program: Dynamic Array Allocation 6
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int i, n=10;
    int *arr=(int *)malloc(n*sizeof(int));  // Allocate memory dynamically
    for(i=0; i<n; i++)  // Iterate through array elements
        arr[i]=rand()%100;  // Store a value in an array element
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", arr[i]);  // Display output
    free(arr);  // Release dynamically allocated memory
    arr=(int *)malloc(100*sizeof(int));  // Allocate memory dynamically
    return 0;  // Indicate successful program termination
}
