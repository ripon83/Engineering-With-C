#include<stdio.h>
#define r 3                     //Defines the row size
#define c 3                     //Defines the column size
void show(int mat[r][c])         //Shows the matrix
{
    for(int i=0;i<r;i++)        //Iterates the rows
    {
        for(int j=0;j<c;j++)    //Iterates the columns
            printf("%d\t",mat[i][j]);    //Prints the matrix items
        printf("\n");           //prints newline after each rows
    }   
}

int main()
{
    //Initializing the matrix
    int mat[3][3] ={{1 , 2 , 3},{4, 5, 6}, {7, 8, 9}};
    printf("The matrix is:\n");
    show(mat);                  //Displays the matrix
    return 0;
}