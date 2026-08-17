/*
 * Program: Dynamic Array Allocation 18
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int *p=(int *)malloc(5*sizeof(int));  // Allocate memory dynamically
    free(p);  // Release dynamically allocated memory
    p[0]=10;  // Store a value in an array element
    printf("%d", p[0]);  // Display output
    return 0;  // Indicate successful program termination
}
