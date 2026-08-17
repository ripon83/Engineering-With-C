/*
 * Program: Assigning Values To A Matrix
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int mat[2][2];
    mat[0][0] = 1;
    mat[0][1] = 2;
    mat[1][0] = 3;
    mat[1][1] = 4;
    printf("The Matrix is:\n");  // Display output
    printf("%d\t%d\n", mat[0][0], mat[0][1]);  // Display output
    printf("%d\t%d", mat[1][0], mat[1][1]);  // Display output
    return 0;  // Indicate successful program termination
}
