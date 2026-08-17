/*
 * Program: Horizontal Mirror Matrix
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>

void flipHorizontal(int r, int c, int des[r][c], int src[r][c])
{
    for(int i=0; i<r; i++)  // Iterate over array elements
    {
        for(int j=0, k=c-1; j<c; j++, k--)  // Iterate over array elements
            des[i][j]=src[i][k];
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

void MirrorMatrix(int r, int c, int A[r][c], int B[r][c])
{
    int res[r][c];
    
    flipHorizontal(r, c, res, B);
    
    show(r, c, A);
    printf("\n");  // Display output
    show(r, c, B);
    printf("\n");  // Display output

    if(equal(r, c, A, res))
        printf("Mirror Matrix");  // Display output
    else
        printf("Not Mirror Matrix");  // Display output
}

int main()   // Main function: execution starts here
{
    int r=3, c=4;
    int A[3][4]={{0,2,1,0}, {-2,0,-1,1}, {-1,1,0,0}};
    int B[3][4]={{0,1,2,0}, {1,-1,0,-2}, {0,0,1,-1}};

    MirrorMatrix(r, c, A, B);
    
    return 0;  // Indicate successful program termination
}
