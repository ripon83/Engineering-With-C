#include <stdio.h>
#include <stdlib.h>
void populate(int r, int c, int mat[r][c], int k)       //Popluate the martix randomly
{
    for(int i=0;i<r;i++)                            //Iterates the rows
        for(int j=0;j<c;j++)                        //Iterates the columns
            mat[i][j]=rand()%k;                    //Assign radnom value less than k
    printf("Successfully populated the matrix.\n");
}

void show(int r, int c, int mat[r][c])                  //Displays the matrix
{
    printf("The matrix is:\n");
    for(int i=0;i<r;i++)                            //Iterates the rows
    {
        for(int j=0;j<c;j++)                        //Iterates the columns
            printf("%d\t",mat[i][j]);              //Prints the items
        printf("\n");                               //Prints a newline after each row
    }
}

void leftUpper(int r, int c, int mat[r][c])             //Displays the left-upper tirnagular matrix
{
    int i,j;
    printf("The left-upper triangular matrix is:\n");
    for(i=0;i<r;i++)                                //Iterates the rows
    {
        for(j=0;j<c;j++)                            //Iterates the columns
        {
            if(i+j<=r-1)                            //If i+j<=r-1, it is an item of left-upper triangular matrix
                printf("%d\t",mat[i][j]);          //prints the items
            else
                printf("\t");                       //Otherwise, prints a tab space
        }
        printf("\n");                               //Prints a newline after each row
    }
}

void leftLower(int r, int c, int mat[r][c])             //Displays the left-lower tirnagular matrix
{
    int i,j;
    printf("The left-lower triangular matrix is:\n");
    for(i=0;i<r;i++)                                //Iterates the rows
    {
        for(j=0;j<c;j++)                            //Iterates the volumns
        {
            if(i>=j)                                //If i>=j, it is an item of left-lower triangular matrix
                printf("%d\t",mat[i][j]);          //prints the items
            else
                printf("\t");                       //Otherwise, prints a tab space
        }
        printf("\n");                               //Prints a newline after each row
    }
}

void rightUpper(int r, int c, int mat[r][c])             //Displays the right-upper tirnagular matrix
{
    int i,j;
    printf("The right-upper triangular matrix is:\n");
    for(i=0;i<r;i++)                                //Iterates the rows
    {
        for(j=0;j<c;j++)                            //Iterates the columns
        {
            if(i<=j)                                //If i<=j, it is an item of right-upper triangular matrix
                printf("%d\t",mat[i][j]);          //Prints the item of right-upper triangular matrix
            else
                printf("\t");                       //Otherwise, prints a tab space
        }
        printf("\n");                               //Prints a newline after each row
    }
}


void rightLower(int r, int c, int mat[r][c])            //Displays the right-lower tirnagular matrix
{
    int i,j;
    printf("The right-lower triangular matrix is:\n");
    for(i=0;i<r;i++)                                //Iterates the rows
    {
        for(j=0;j<c;j++)                            //Iterates the columns
        {
            if(i+j>=r-1)                            //If i+j>=r-1, it is an item of right-lower triangular matrix
                printf("%d\t",mat[i][j]);          //Prints the item of right-lower triangular matrix
            else
                printf("\t");                       //Otherwise, prints a tab space
        }
        printf("\n");                               //Prints a newline after each row
    }
}

void PDE(int r, int c, int mat[r][c])                  
{
    printf("The principal diagonal elements are:\n");
    for(int i=0;i<r;i++)
        printf("%d\t",mat[i][i]);
    printf("\n");
}

void SPDE(int r, int c, int mat[r][c])
{
    printf("The secondary principal diagonal elements are:\n");
    for(int i=0;i<r;i++)
        printf("%d\t",mat[i][r-i-1]);
    printf("\n");
}

int main()
{
    int r=4, c=4, mat[10][10];
    
    populate(r, c, mat, 10);
    show(r, c, mat);
    
    PDE(r, c, mat);
    
    SPDE(r, c, mat);
    
    leftUpper(r, c, mat);
    
    leftLower(r, c, mat);
    
    rightUpper(r, c, mat);
    
    rightLower(r, c, mat);

    return 0;
}