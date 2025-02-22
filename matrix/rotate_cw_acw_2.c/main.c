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

void rotateCW(int mat[], int r, int c)
{
    int tmp[r*c];
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the columns
            tmp[i*c+j]=mat[(c-j-1)*c+i];  //Rotate the matrix clockwise direction
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the columns
            mat[i*c+j]=tmp[i*c+j];      //Cppy back the items
}

void rotateACW(int mat[], int r, int c)
{
    int tmp[r*c];
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the columns
            tmp[(c-j-1)*c+i]=mat[i*c+j];  //Rotate the matrix counterclockwise direction
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the column
            mat[i*c+j]=tmp[i*c+j];      //Cppy back the items
}

int main()
{
    int matA[100],matB[100];
    int r=4, c=4;
    
    populate(matA, r, c, 10);      //Populate the matA[] randomly 
    populate(matB, r, c, 10);      //Populate the matB[] randomly
    
    printf("\nThe matrix A is:\n");
    show(matA, r, c);           //Displays the matrix matA[][]
    printf("\nThe matrix after the clockwise rotation:\n");
    rotateCW(matA, r, c);       //Rotates the matA[][] clockwise direction
    show(matA, r, c);           //Displays the rotated matrix
    
    printf("\nThe matrix B is:\n");
    show(matB, r, c);           //Displays the matrix matB[][]
    printf("\nThe matrix after the anticlockwise rotation:\n");
    rotateACW(matB, r, c);      //Rotates the matB[][] clockwise direction
    show(matB, r, c);           //Displays the rotated matrix
    return 0;
}
