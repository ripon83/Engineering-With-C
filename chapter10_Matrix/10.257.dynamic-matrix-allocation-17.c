/*
 * Program: Dynamic Matrix Allocation 17
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int *p=malloc(9*sizeof(int));  // Allocate memory dynamically
    int **q=(int **)p;

    q[1][1]=5;
    return 0;  // Indicate successful program termination
}
