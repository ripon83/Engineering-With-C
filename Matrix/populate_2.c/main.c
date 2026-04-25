#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void populate(int mat[], int r, int c, int k)   //Randomly populating the matrix
{
    srand(clock());                 //Changing the seed value of rand()
    for(int i=0; i<r; i++)          //Number of rows
        for(int j=0; j<c; j++)      //Number of columns
            mat[i*c+j]=rand()%k;     //Assigning random number less than k
    printf("Successfully populated the matrix.\n");
}
void show(int mat[], int r, int c)
{
    for(int i=0; i<r; i++)              //Number of rows
    {
        for(int j=0; j<c; j++)          //Number of column
            printf("%d\t",mat[i*c+j]);   //Printing each item
        printf("\n");                   //Print newline after each row
    }
}
int main()
{
    int r=3, c=4, mat[100];    
    populate(mat, r, c, 5);         //Populating the matrix randomly
    printf("\nThe matrix is:\n");
    show(mat, r, c);                //Displaying the matrix
    return 0;
}