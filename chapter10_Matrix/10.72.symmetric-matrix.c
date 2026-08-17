/*
 * Program: Symmetric Matrix
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>

void show(int r, int c, int m[r][c])
{
    for(int i=0; i<r; i++)  // Iterate over array elements
    {
        for(int j=0; j<c; j++)  // Iterate over array elements
            printf("%d\t", m[i][j]);  // Display output
        printf("\n");  // Display output
    }
}

void transpose(int r, int c, int des[r][c], int src[r][c])
{
    if(r!=c)
    {
        printf("Transpose comparison requires a square matrix!");  // Display output
        return;
    }

    for(int i=0; i<r; i++)  // Iterate over array elements
    {
        for(int j=0; j<c; j++)  // Iterate over array elements
            des[i][j]=src[j][i];
    }
}

//Checks equality between two matrices A[][] and B[][]
int equal(int r, int c, int A[r][c], int B[r][c])
{
    for(int i=0; i<r; i++)  // Iterate over array elements
    {
        for(int j=0; j<c; j++)  // Iterate over array elements
        {
            if(A[i][j]!=B[i][j])    //Returns 0 if A is not equal to B
                return 0;  // Indicate successful program termination
        }
    }
    return 1;                       //Returns 1 if A is equal to B
}

void symmetry(int r, int c, int A[r][c])
{
    if(r!=c)
    {
        printf("Non-symmetric matrix");  // Display output
        return;
    }

    int B[r][c];

    transpose(r, c, B, A);          //B=A^T

    if(equal(r, c, A, B))           //Checks whether A=A^T
        printf("Symmetric matrix");  // Display output
    else
        printf("Non-symmetric matrix");  // Display output
}

int main()   // Main function: execution starts here
{
    int r=3, c=3;
    int A[3][3]={{1,2,1}, {2,1,0}, {1,0,1}};

    printf("The matrix is:\n");  // Display output
    show(r, c, A);

    symmetry(r, c, A);

    return 0;  // Indicate successful program termination
}
