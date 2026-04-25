#include <stdio.h>

void show(int r, int c, int mat[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d\t",mat[i][j]);
        printf("\n");
    }
}

/*Multiplying two matrix matA[] and matB[], and the resultant matrix is stored in matrix 
res[]. The function does not return any value because it is call-by-reference. */
void mult(int r, int c, int matA[r][c], int matB[r][c], int res[r][c])
{
    int i,j,k;
    for(i=0;i<r;i++)                //Numbers of row
    {
        for(j=0;j<c;j++)            //Number of column
        {
            res[i][j]=0;           //Reset res[i][j]=0
            for(k=0;k<c;k++)        //For each items of rows and columns
                res[i][j]=res[i][j]+matA[i][k]*matB[k][j]; //res[i][j]+=matA[i][k]*matB[k][j]
        }
    }
    printf("\nThe matrix after multiplication itself is:\n");
    show(r, c, res);                  //Display the resultant matrix
}

int check(int r, int c, int matA[r][c], int matB[r][c])
{                                   //Checking whether two matrices are equal or not
    for(int i=0; i<r; i++)          //Number of rows
        for(int j=0; j<c; j++)      //Number of column
            if(matA[i][j]!=matB[i][j])    //If matA[i][j]!=matB[i][j]
                return 0;                   //Return 0, not equal
    return 1;                               //Return 1, equal
}

int idempotent(int r, int c, int matA[r][c])    //Checking idempotent matrix
{
    int matB[r][c];                  //matB[] matrix stores the result of 
    mult(r, c, matA, matA, matB);       //multiplication of matA[] and matA[]
    if(check(r, c, matA, matB))        //If matA==matB,
        return 1;                   //Return idempotent
    return 0;                       //Otherwise, return not idempotent
}

int main()
{
    int mat[3][3]={{2, -2, -4},{-1, 3, 4},{1, -2, -3}};  //3x3 matrix in 1D format
    int r=3,c=3;                                //Rows and column
    
    printf("\nMatrix A:\n");
    show(r, c, mat);                              //Displays the matrix
    
    if(idempotent(r, c, mat))                     //Checking idempotent of the matrix
        printf("\nThe matrix is an idempotent\n");
    else
        printf("\nThe matrix is not an idempotent\n");
    return 0;
}