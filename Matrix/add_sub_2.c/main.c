#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void populate(int mat[], int r, int c, int k)   //Randomly populating the matrix
{
    srand(clock());                 //Changing the seed value of rand()
    for(int i=0; i<r; i++)          //Number of rows
        for(int j=0; j<c; j++)      //Number of columns
            mat[i*c+j]=rand()%k;     //Assigning random number less than k
}
void show(int mat[],int r, int c)         //Shows the matrix
{
    for(int i=0;i<r;i++)        //Iterates the rows
    {
        for(int j=0;j<c;j++)    //Iterates the columns
            printf("%d\t",mat[i*c+j]);    //Prints the matrix items
        printf("\n");           //prints newline after each rows
    }   
}

void add(int matA[], int matB[], int res[], int r, int c)
{
    int i,j,k;
    for(i=0; i<r; i++)          //Iterates the rows
        for(j=0; j<c; j++)      //Iterates the columns
            res[i*c+j]=matA[i*c+j] + matB[i*c+j];    //Adds two items of the two matrices
}

void sub(int matA[], int matB[], int res[], int r, int c)
{
    int i,j,k;
    for(i=0; i<r; i++)          //Iterates the rows
        for(j=0; j<c; j++)      //Iterates the columns
            res[i*c+j]=matA[i*c+j] - matB[i*c+j];    //Subtracts two items of the two matrices
}

int main()
{
    int r=3, c=4, matA[100], matB[100], res[1010];
    populate(matA, r, c, 10);           //Populates the matA with random numbers less than 10
    populate(matB, r, c, 10);           //Populates the matB with random numbers less than 10
    
    printf("\nThe matrix A is:\n");
    show(matA, r, c);                   //Displays the matrix matA
    
    printf("\nThe matrix B is:\n");
    show(matB, r, c);                   //Displays the matrix matB
    
    add(matA, matB, res, r, c);         //Add matA[][] and matB[][], store the result in res[][]
    printf("\nThe resultant matrix after addition is:\n");
    show(res, r, c);                    //Displays the resultant matrix
    
    sub(matA, matB, res, r, c);         //Subtracts matB[][] from matA[][], and stores the result in res[][]
    printf("\nThe resultant matrix after subtraction is:\n");
    show(res, r, c);                    //Displays the resultant matrix

    return 0;
}