/*
 * Program: Symmetric Matrix 2
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
        printf("No transpose!");  // Display output
        return;
    }

    for(int i=0; i<r; i++)  // Iterate over array elements
    {
        for(int j=0; j<c; j++)  // Iterate over array elements
            des[i][j]=src[j][i];
    }
}

//Checks whether A[][] is equal to the negative of B[][]
int equal(int r, int c, int A[r][c], int B[r][c])
{
    for(int i=0; i<r; i++)  // Iterate over array elements
    {
        for(int j=0; j<c; j++)  // Iterate over array elements
        {
            if(A[i][j]!=-B[i][j])   //Returns 0 if A[i][j]!=-B[i][j]
                return 0;  // Indicate successful program termination
        }
    }
    return 1;                       //Returns 1 if A=-B
}

void skewSymmetry(int r, int c, int A[r][c])
{
    if(r!=c)
    {
        printf("Non skew-symmetric matrix");  // Display output
        return;
    }

    int B[r][c];

    transpose(r, c, B, A);          //B=A^T

    if(equal(r, c, A, B))           //Checks whether A=-A^T
        printf("Skew-symmetric matrix");  // Display output
    else
        printf("Non skew-symmetric matrix");  // Display output
}

int main()   // Main function: execution starts here
{
    int r=3, c=3;
    int A[3][3]={{0,2,1}, {-2,0,-1}, {-1,1,0}};

    printf("The matrix is:\n");  // Display output
    show(r, c, A);

    skewSymmetry(r, c, A);

    return 0;  // Indicate successful program termination
}
