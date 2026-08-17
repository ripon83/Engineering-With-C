/*
 * Program: Dynamic Array Allocation 13
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int i, n=10;
    int *arr=(int *)calloc(n,4);  // Allocate memory dynamically
    printf("The array is:\n");  // Display output
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", arr[i]);  // Display output
    return 0;  // Indicate successful program termination
}
