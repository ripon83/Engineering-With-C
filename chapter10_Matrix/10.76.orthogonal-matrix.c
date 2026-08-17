/*
 * Program: Orthogonal Matrix
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>

//Transposes the given matrix and stores the result in des[][]
void transpose(int r, int c, int des[r][c], int src[r][c])
{
    for(int i=0; i<r; i++)  // Iterate over array elements
    {
        for(int j=0; j<c; j++)  // Iterate over array elements
            des[i][j]=src[j][i];
    }
}

//Multiplies matrices A[][] and B[][] and stores the result in res[][]
void multiply(int r, int c, int res[r][c],
              int A[r][c], int B[r][c])
{
    for(int i=0; i<r; i++)  // Iterate over array elements
    {
        for(int j=0; j<c; j++)  // Iterate over array elements
        {
            res[i][j]=0;

            for(int k=0; k<c; k++)  // Iterate over array elements
                res[i][j]+=A[i][k]*B[k][j];
        }
    }
}

//Checks whether the given matrix is an identity matrix
int identity(int r, int c, int A[r][c])
{
    for(int i=0; i<r; i++)  // Iterate over array elements
    {
        for(int j=0; j<c; j++)  // Iterate over array elements
        {
            if(i==j && A[i][j]!=1)
                return 0;  // Indicate successful program termination

            if(i!=j && A[i][j]!=0)
                return 0;  // Indicate successful program termination
        }
    }

    return 1;
}

void orthogonal(int r, int c, int A[r][c])
{
    if(r!=c)
    {
        printf("Non-orthogonal");  // Display output
        return;
    }

    int B[r][c], res[r][c];

    transpose(r, c, B, A);          //B=A^T
    multiply(r, c, res, A, B);      //res=A*A^T

    if(identity(r, c, res))
        printf("Orthogonal matrix");  // Display output
    else
        printf("Non-orthogonal matrix");  // Display output
}

int main()  // Main function: execution starts here
{
    int r=3, c=3;
    int A[3][3]={{0,1,0}, {1,0,0}, {0,0,1}};

    printf("The matrix is:\n");  // Display output
    show(r, c, A);

    orthogonal(r, c, A);

    return 0;  // Indicate successful program termination
}
