/*
 * Program: Complete Example With Runtime Dimensions
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>

void show(int r, int c, int mat[r][c])
{
    for(int i=0; i<r; i++)  // Iterate over array elements
    {
        for(int j=0; j<c; j++)  // Iterate over array elements
            printf("%d\t", mat[i][j]);  // Display output
        printf("\n");  // Display output
    }
}

int main()  // Main function: execution starts here
{
    int r=3, c=4;

    int mat[3][4]={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("The matrix is:\n");  // Display output

    show(r, c, mat);

    return 0;  // Indicate successful program termination
}
