/*
 * Program: Dynamic Matrix Allocation
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int rows=4, cols=3;
    int *p=(int *)malloc(rows*cols*sizeof(int));  // Allocate memory dynamically
    return 0;  // Indicate successful program termination
}
