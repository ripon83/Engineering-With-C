#include <stdio.h>
void show(int r, int c, int m[r][c])
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            printf("%d\t",m[i][j]);
        printf("\n");
    }
}

void transpose(int r, int c, int des[r][c], int src[r][c])
{
    if(r!=c)
    {
        printf("No transpose!");
        return;
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            des[i][j]=src[j][i];
    }
}

//Check for euqlity between two matrices A[][] and B[][]
int equal(int r, int c, int A[r][c], int B[r][c])
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(A[i][j]!=-B[i][j])        //Return 0 if A is not equal B
                return 0;
        }
    }
    return 1;                           //Return 1 if A is equal B
}

void skewSymmetry(int r, int c, int A[r][c])
{
    int B[r][c], res[r][c];
    
    transpose(r, c, B, A);

    if(equal(r, c, A, B))
        printf("Skew-symmetric matrix");
    else
        printf("Non skew-symmetric matrix");
    
}

int main() 
{
    int r=3, c=3;
    int A[3][3]={{0,2,1}, {-2, 0, -1}, {-1, 1, 0}};
    skewSymmetry(r, c, A);    
    return 0;
}