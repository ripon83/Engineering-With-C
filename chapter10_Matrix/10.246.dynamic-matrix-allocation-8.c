/*
 * Program: Dynamic Matrix Allocation 8
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int m=4, n=3;
    int **p=malloc(m*sizeof(int *));  // Allocate memory dynamically
    for(int i=0; i<m; i++)  // Iterate over array elements
        p[i]=malloc(n*sizeof(int));  // Allocate memory dynamically

    for(int i=0; i<=m; i++)  // Iterate over array elements
        free(p[i]);  // Release dynamically allocated memory

    free(p);  // Release dynamically allocated memory
    return 0;  // Indicate successful program termination
}
