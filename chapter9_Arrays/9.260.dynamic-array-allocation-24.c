/*
 * Program: Dynamic Array Allocation 24
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int *p=(int *)malloc(5*sizeof(int));  // Allocate memory dynamically
    if(p==NULL)
        return 0;  // Indicate successful program termination
    p[5]=100;  // Store a value in an array element
    printf("%d", p[5]);  // Display output
    free(p);  // Release dynamically allocated memory
    return 0;  // Indicate successful program termination
}
