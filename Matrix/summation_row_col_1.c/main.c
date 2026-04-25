#include <stdio.h>
void show(int r, int c, int mat[r][c])          //Displays the matrix
{
    for(int i=0;i<r;i++)                    //Ietartes the rows
    {   
        for(int j=0;j<c;j++)                //Itertes the column
            printf("%d\t",mat[i][j]);      //Prints the items
        printf("\n");                       //Prints a newline after each row
    }
}
void sumRow(int r, int c, int mat[r][c])        //Summation of items row-wise
{
    int i,j,sum;
    for(i=0;i<r;i++)                        //Iterates the rows
    {
        sum=0;                              //Initialzies the sum for each row
        for(j=0;j<c;j++)                    //Iterates the columns
            sum=sum+mat[i][j];             //Add the items
        printf("Summation of %d row is %d\n",i+1,sum);
    }
}

void sumCol(int r, int c, int mat[r][c])        //Summation of items row-wise
{
    int i,j,sum,col=0;                  
    for(i=0;i<r;i++)                        //Iterates the rows
    {
        sum=0;                              //Initialzies the sum for each column
        col++;                              //Track the column number
        for(j=0;j<c;j++)                    //Iterates the columns
            sum=sum+mat[j][i];             //Add the items
        printf("Summation of %d col is %d\n",col,sum);
    }
}

int main()
{
    int mat[3][3]={{10,12,3},{14,5,6},{7,0,9}};       
    show(3, 3, mat);                          //Displays the matrix
    printf("\n");
    sumRow(3, 3, mat);                        //Sum up each rows of the matrix
    printf("\n");
    sumCol(3, 3, mat);                        //Sum up each column of the matrix

    return 0;
}