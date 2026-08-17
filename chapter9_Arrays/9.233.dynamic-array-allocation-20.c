/*
 * Program: Dynamic Array Allocation 20
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int *p=(int *)malloc(5*sizeof(int));  // Allocate memory dynamically
    p=NULL;
    free(p);  // Release dynamically allocated memory
    return 0;  // Indicate successful program termination
}
