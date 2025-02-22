#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void populate(int r, int c, int mat[r][c], int k)   //Randomly populating the matrix
{
    srand(clock());                 //Changing the seed value of rand()
    for(int i=0; i<r; i++)          //Number of rows
        for(int j=0; j<c; j++)      //Number of columns
            mat[i][j]=rand()%k;    //Assigning random number less than k
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

//Principal diagonal element (PDE)
void PDE(int r, int c, int mat[r][c])       //Displays PDE
{
    for(int i=0;i<r;i++)                //Iterates the rows
        printf("%d\t",mat[i][i]);      //Prints the PDE which equivalent to mat[i][i]
}

//Secondary principal diagonal element (SPDE)
void SPDE(int r, int c, int mat[r][c])          //Displays SPDE
{
    for(int i=0;i<r;i++)                    //Iterates the rows
        printf("%d\t",mat[i][r-i-1]);  //Prints the SPDE which equivalent to mat[i][r-i-1]
}

int main()
{
    int mat[10][10], r=5, c=5;
    populate(r, c, mat, 10);
    printf("The matrix is:\n");
    show(r, c, mat);                    //Displays the matrxi
    printf("The principal diagonal elements are:\n");
    PDE(r, c, mat);                     //Displays the PDE
    printf("\nThe secondary principal diagonal elements are:\n");
    SPDE(r, c, mat);                    //Displays the SPDE
    return 0;
}