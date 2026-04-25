#include <stdio.h>

void show(int mat[],int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d\t",mat[i*c+j]);
        printf("\n");
    }
}

/*Multiplying two matrix matA[] and matB[], and the resultant matrix is stored in matrix 
res[]. The function does not return any value because it is call-by-reference. */
void mult(int matA[], int matB[], int res[], int r, int c)
{
    int i,j,k;
    for(i=0;i<r;i++)                //Numbers of row
    {
        for(j=0;j<c;j++)            //Number of column
        {
            res[i*c+j]=0;           //Reset res[i][j]=0
            for(k=0;k<c;k++)        //For each items of rows and columns
                res[i*c+j]=res[i*c+j]+matA[i*c+k]*matB[k*c+j]; //res[i][j]+=matA[i][k]*matB[k][j]
        }
    }
    printf("\nThe matrix after multiplication itself is:\n");
    show(res,r,c);                  //Display the resultant matrix
}

int check(int matA[], int matB[], int r, int c)
{                                   //Checking whether two matrices are equal or not
    for(int i=0; i<r; i++)          //Number of rows
        for(int j=0; j<c; j++)      //Number of column
            if(matA[i*c+j]!=matB[i*c+j])    //If matA[i][j]!=matB[i][j]
                return 0;                   //Return 0, not equal
    return 1;                               //Return 1, equal
}

int idempotent(int matA[], int r, int c)    //Checking idempotent matrix
{
    int matB[r*c];                  //matB[] matrix stores the result of 
    mult(matA, matA, matB, r, c);       //multiplication of matA[] and matA[]
    if(check(matA, matB, r, c))        //If matA==matB,
        return 1;                   //Return idempotent
    return 0;                       //Otherwise, return not idempotent
}

int main()
{
    int mat[9]={2, -2, -4,-1, 3, 4,1, -2, -3};  //3x3 matrix in 1D format
    int r=3,c=3;                                //Rows and column
    
    printf("\nMatrix A:\n");
    show(mat,r,c);                              //Displays the matrix
    
    if(idempotent(mat,r,c))                     //Checking idempotent of the matrix
        printf("\nThe matrix is an idempotent\n");
    else
        printf("\nThe matrix is not an idempotent\n");
    return 0;
}