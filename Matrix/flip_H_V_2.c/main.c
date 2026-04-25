#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void populate(int mat[], int r, int c, int k)   //Randomly populating the matrix
{
    srand(clock());                 //Changing the seed value of rand()
    for(int i=0; i<r; i++)          //Number of rows
        for(int j=0; j<c; j++)      //Number of columns
            mat[i*c+j]=rand()%k;    //Assigning random number less than k
}
void show(int mat[], int r, int c)         //Shows the matrix
{
    for(int i=0;i<r;i++)        //Iterates the rows
    {
        for(int j=0;j<c;j++)    //Iterates the columns
            printf("%d\t",mat[i*c+j]);    //Prints the matrix items
        printf("\n");           //prints newline after each rows
    }   
}
void flipH(int mat[], int r, int c)
{
    int tmp[r*c];
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the column
            tmp[i*c+(c-j-1)]=mat[i*c+j];  //Move the left column to right column
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the column
            mat[i*c+j]=tmp[i*c+j];   //Copy back the items
}
void flipV(int mat[], int r, int c)
{
    int tmp[r*c];
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the column
            tmp[(r-i-1)*c+j]=mat[i*c+j];  //Move the top row to bottom row
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the column
            mat[i*c+j]=tmp[i*c+j];   //Copy back the items
}
int main()
{
    int matA[100],matB[100];
    int r=4, c=4;
    
    populate(matA, r, c, 10);           //Populate the matA[][] randomly
    populate(matB, r, c, 10);           //Populate the matA[][] randomly
    
    printf("\nThe matrix A is:\n");
    show(matA, r, c);               //Displays the matrix matA[][]
    printf("\nThe matrix A after the flipping horizontally:\n");
    flipH(matA, r, c);              //Flip the matrix matA horizontally
    show(matA, r, c);               //Display the flipped matrix matA[][]
    
    printf("\nThe matrix B is:\n");
    show(matB, r, c);               //Displays the matrix matB[][]
    printf("\nThe matrix B after the flipping vertically:\n");
    flipV(matB, r, c);              //Flip the matrix matB vertically
    show(matB, r, c);               //Display the flipped matrix matB[][]    
    return 0;
}