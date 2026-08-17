/*
 * Program: Dynamic Array Allocation 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int i, n=10;
    int *arr=(int *)malloc(40);  // Allocate memory dynamically
    for(i=0; i<n; i++)  // Iterate through array elements
        arr[i]=rand()%100;  // Store a value in an array element
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", arr[i]);  // Display output
    return 0;  // Indicate successful program termination
}
