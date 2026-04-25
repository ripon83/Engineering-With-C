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

void transpose(int mat[], int r, int c, int res[])
{
    for(int i=0;i<r;i++)            //Number of rows
        for(int j=0;j<c;j++)        //Number of column
            res[j*r+i]=mat[i*c+j];  //Alters the rows and columns
}
int main()
{
    int mat[100], res[100];
    int r=3, c=4;
    populate(mat, r, c, 5);           //Populates the mat[][] with random numbers less than 5
    printf("\nMatrix A:\n");
    show(mat, r, c);                  //Displays the matrix mat[][]
                        //Transpose the matrix mat[][], and stores the result in res[][]
    transpose(mat, r, c, res); 
    
    printf("\nThe resultant matrix after the transpose operation is:\n");
    show(res, c, r);                    //Displays the transposed matrix
    return 0;
}