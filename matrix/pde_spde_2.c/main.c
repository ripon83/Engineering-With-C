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

//Principal diagonal element (PDE)
void PDE(int mat[], int r, int c)       //Displays PDE
{
    for(int i=0;i<r;i++)                //Iterates the rows
        printf("%d\t",mat[i*c+i]);      //Prints the PDE which equivalent to mat[i][i]
}

//Secondary principal diagonal element (SPDE)
void SPDE(int mat[], int r, int c)          //Displays SPDE
{
    for(int i=0;i<r;i++)                    //Iterates the rows
        printf("%d\t",mat[i*c+(r-i-1)]);  //Prints the SPDE which equivalent to mat[i][r-i-1]
}

int main()
{
    int mat[100], r=5, c=5;
    populate(mat, r, c, 10);
    printf("The matrix is:\n");
    show(mat, r, c);                    //Displays the matrxi
    printf("The principal diagonal elements are:\n");
    PDE(mat, r, c);                     //Displays the PDE
    printf("\nThe secondary principal diagonal elements are:\n");
    SPDE(mat, r, c);                    //Displays the SPDE
    return 0;
}