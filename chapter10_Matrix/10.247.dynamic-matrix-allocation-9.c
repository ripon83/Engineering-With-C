/*
 * Program: Dynamic Matrix Allocation 9
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdlib.h>
int **allocate(int m, int n)
{
    static int *p[4];
    for(int i=0; i<m; i++)  // Iterate over array elements
        p[i]=malloc(n*sizeof(int));  // Allocate memory dynamically
    return p;
}
int main()  // Main function: execution starts here
{
    int **p=allocate(6, 3);
    return 0;  // Indicate successful program termination
}
