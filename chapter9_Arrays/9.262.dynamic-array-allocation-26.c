/*
 * Program: Dynamic Array Allocation 26
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int *p=(int *)malloc(5*sizeof(int));  // Allocate memory dynamically
    int *q=p;
    free(p);  // Release dynamically allocated memory
    q[0]=50;  // Store a value in an array element
    printf("%d", q[0]);  // Display output
    return 0;  // Indicate successful program termination
}
