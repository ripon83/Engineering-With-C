#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void populate(int r, int c, int mat[r][c], int k)   //Randomly populating the matrix
{
    srand(clock());                 //Changing the seed value of rand()
    for(int i=0; i<r; i++)          //Number of rows
        for(int j=0; j<c; j++)      //Number of columns
            mat[i][j]=rand()%k;     //Assigning random number less than k
}
void show(int r, int c, int mat[r][c])         //Shows the matrix
{
    for(int i=0;i<r;i++)        //Iterates the rows
    {
        for(int j=0;j<c;j++)    //Iterates the columns
            printf("%d\t",mat[i][j]);    //Prints the matrix items
        printf("\n");           //prints newline after each rows
    }   
}

void rotateCW(int r, int c, int mat[r][c])
{
    int tmp[r][c];
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the columns
            tmp[i][j]=mat[c-j-1][i];  //Rotate the matrix clockwise direction
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the columns
            mat[i][j]=tmp[i][j];      //Cppy back the items
}

void rotateACW(int r, int c, int mat[r][c])
{
    int tmp[r][c];
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the columns
            tmp[c-j-1][i]=mat[i][j];  //Rotate the matrix counterclockwise direction
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the column
            mat[i][j]=tmp[i][j];      //Cppy back the items
}

int main()
{
    int matA[10][10],matB[10][10];
    int r=4,c=4;
    
    populate(r, c, matA, 10);      //Populate the matA[][] randomly 
    populate(r, c, matB, 10);      //Populate the matB[][] randomly
    
    printf("\nThe matrix A is:\n");
    show(r, c, matA);           //Displays the matrix matA[][]
    printf("\nThe matrix after the clockwise rotation:\n");
    rotateCW(r, c, matA);       //Rotates the matA[][] clockwise direction
    show(r, c, matA);           //Displays the rotated matrix
    
    printf("\nThe matrix B is:\n");
    show(r, c, matB);           //Displays the matrix matB[][]
    printf("\nThe matrix after the anticlockwise rotation:\n");
    rotateACW(r, c, matB);      //Rotates the matB[][] clockwise direction
    show(r, c, matB);           //Displays the rotated matrix
    return 0;
}
