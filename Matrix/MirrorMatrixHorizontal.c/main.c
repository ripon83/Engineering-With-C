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

void flipHorizontal(int r, int c, int des[r][c], int src[r][c])
{
    for(int i=0; i<r; i++)
    {
        for(int j=0,k=c-1; j<c; j++, k--)
            des[i][j]=src[i][k];
    }
}

//Check for euqlity between two matrices A[][] and B[][]
int equal(int r, int c, int A[r][c], int B[r][c])
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(A[i][j]!=B[i][j])        //Return 0 if A is not equal B
                return 0;
        }
    }
    return 1;                           //Return 1 if A is equal B
}

void MirrorMatrix(int r, int c, int A[r][c], int B[r][c])
{
    int res[r][c];
    
    flipHorizontal(r, c, res, B);
    
    show(r, c, A);
    printf("\n");
    show(r, c, B);
    printf("\n");

    if(equal(r, c, A, res))
        printf("Mirror Matrix");
    else
        printf("Not Mirror Matrix");
    
}

int main() 
{
    int r=3, c=4;
    int A[3][4]={{0,2,1,0}, {-2, 0, -1,1}, {-1, 1, 0,0}};
    int B[3][4]={{0,1,2,0}, {1,-1, 0, -2}, {0,0, 1, -1}};
    MirrorMatrix(r, c, A, B);    
    return 0;
}