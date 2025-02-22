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

void transpose(int r, int c, int mat[r][c], int res[c][r])
{
    for(int i=0;i<r;i++)            //Number of rows
        for(int j=0;j<c;j++)        //Number of column
            res[j][i]=mat[i][j];    //Alters the rows and columns
}
int main()
{
    int mat[10][10], res[10][10];
    int r=3, c=4;
    populate(r, c, mat, 5);           //Populates the mat[][] with random numbers less than 5
    printf("\nMatrix A:\n");
    show(r, c, mat);                  //Displays the matrix mat[][]
                        //Transpose the matrix mat[][], and stores the result in res[][]
    transpose(r, c, mat, res); 
    
    printf("\nThe resultant matrix after the transpose operation is:\n");
    show(c, r, res);                    //Displays the transposed matrix
    return 0;
}