/*
 * Program: Dynamic Matrix Allocation 15
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int m=4, n=3;
    int (*p)[n]=malloc(m*n*sizeof(int *));  // Allocate memory dynamically
    p[3][2]=10;
    free(p);  // Release dynamically allocated memory
    return 0;  // Indicate successful program termination
}
