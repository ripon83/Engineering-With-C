/*
 * Program: Dynamic Array Allocation 21
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int *p=(int *)malloc(5*sizeof(int));  // Allocate memory dynamically
    p=(int *)malloc(10*sizeof(int));  // Allocate memory dynamically
    free(p);  // Release dynamically allocated memory
    return 0;  // Indicate successful program termination
}
