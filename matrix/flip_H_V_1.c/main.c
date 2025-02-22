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
void flipH(int r, int c, int mat[r][c])
{
    int tmp[r][c];
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the column
            tmp[i][c-j-1]=mat[i][j];  //Move the left column to right column
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the column
            mat[i][j]=tmp[i][j];   //Copy back the items
}
void flipV(int r, int c, int mat[r][c])
{
    int tmp[r][c];
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the column
            tmp[r-i-1][j]=mat[i][j];  //Move the top row to bottom row
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the column
            mat[i][j]=tmp[i][j];   //Copy back the items
}
int main()
{
    int matA[10][10],matB[10][20];
    int r=4, c=4;
    
    populate(r, c, matA, 10);           //Populate the matA[][] randomly
    populate(r, c, matB, 10);           //Populate the matA[][] randomly
    
    printf("\nThe matrix A is:\n");
    show(r, c, matA);               //Displays the matrix matA[][]
    printf("\nThe matrix A after the flipping horizontally:\n");
    flipH(r, c, matA);              //Flip the matrix matA horizontally
    show(r, c, matA);               //Display the flipped matrix matA[][]
    
    printf("\nThe matrix B is:\n");
    show(r, c, matB);               //Displays the matrix matB[][]
    printf("\nThe matrix B after the flipping vertically:\n");
    flipV(r, c, matB);              //Flip the matrix matB vertically
    show(r, c, matB);               //Display the flipped matrix matB[][]    
    return 0;
}