/*
 * Program: Read And Display Matrix
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>

void read(int r, int c, int mat[r][c])
{
    for(int i=0; i<r; i++)  // Iterate over array elements
        for(int j=0; j<c; j++)  // Iterate over array elements
            scanf("%d", &mat[i][j]);  // Read input
}

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
    int r=2, c=3;
    int mat[r][c];

    printf("Enter %d matrix elements:\n", r*c);  // Display output
    read(r, c, mat);

    printf("The matrix is:\n");  // Display output
    show(r, c, mat);

    return 0;  // Indicate successful program termination
}
