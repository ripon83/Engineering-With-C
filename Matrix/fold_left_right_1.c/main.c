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

void foldRight(int r, int c, int mat[r][c], int res[r][c])
{
    for(int i=0; i<r; i++)              //Iterates the rows 
    {
        for(int j=0; j<c; j++)          //Iterates the columns
        {
            if(i==j)                    //If i==j, just copy the items
                res[i][j]=mat[i][j];
            else
            if(i<j)                     //If i<j, fold the matrix mat[][]
                res[i][j]=mat[i][j]+mat[j][i];
            else
                res[i][j]=0;            //Otherwise, clear the matrix cell
        }
    }
}

void foldLeft(int r, int c, int mat[r][c], int res[r][c])
{
    for(int i=0; i<r; i++)          //Iterates the rows
    {
        for(int j=0; j<c; j++)      //Iterates the columns
        {
            if(i+j==r-1)            //If i+j<=r-1, just copy the item
                res[i][j]=mat[i][j];
            else
            if((i+j)<r)             //If i+j<r, fold the matrix mat[][]
                res[i][j]=mat[i][j]+mat[r-j-1][c-i-1];
            else
                res[i][j]=0;        //Otherwise, clear the matrix cell
        }
    }
}

int main()
{
    int r=4, c=4;
    int mat[10][10], res1[10][10], res2[10][10];
    populate(r, c, mat, 10);          //Populates the matA[][] randomly with less than 10
    printf("The matrix is:\n");
    show(r, c, mat);                //Displays the matrix mat[][]
    
    printf("The right-folded matrix is:\n");
    foldRight(r, c, mat, res1); //Folds right the mat[][] and stroes the result in res1[][]
    show(r, c, res1);               //Displays the folded matrix
    
    printf("The left-folded matrix is:\n");
    foldLeft(r, c, mat, res2); //Folds right the mat[][] and stroes the result in res2[][]    
    show(r, c, res2);               //Displays the folded matrix
}