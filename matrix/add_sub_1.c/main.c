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

void add(int r, int c, int matA[r][c], int matB[r][c], int res[r][c])
{
    int i,j,k;
    for(i=0; i<r; i++)          //Iterates the rows
        for(j=0; j<c; j++)      //Iterates the columns
            res[i][j]=matA[i][j] + matB[i][j];    //Adds two items of the two matrices
}

void sub(int r, int c, int matA[r][c], int matB[r][c], int res[r][c])
{
    int i,j,k;
    for(i=0; i<r; i++)          //Iterates the rows
        for(j=0; j<c; j++)      //Iterates the columns
            res[i][j]=matA[i][j] - matB[i][j];    //Subtracts two items of the two matrices
}

int main()
{
    int r=3, c=4, matA[10][10], matB[10][10], res[10][10];
    populate(r, c, matA, 10);           //Populates the matA with random numbers less than 10
    populate(r, c, matB, 10);           //Populates the matB with random numbers less than 10
    
    printf("\nThe matrix A is:\n");
    show(r, c, matA);                   //Displays the matrix matA
    
    printf("\nThe matrix B is:\n");
    show(r, c, matB);                   //Displays the matrix matB
    
    add(r, c, matA, matB, res);         //Add matA[][] and matB[][], store the result in res[][]
    printf("\nThe resultant matrix after addition is:\n");
    show(r, c, res);                    //Displays the resultant matrix
    
    sub(r, c, matA, matB, res);         //Subtracts matB[][] from matA[][], and stores the result in res[][]
    printf("\nThe resultant matrix after subtraction is:\n");
    show(r, c, res);                    //Displays the resultant matrix

    return 0;
}