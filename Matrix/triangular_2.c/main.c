#include <stdio.h>
#include <stdlib.h>
void populate(int mat[], int r, int c, int k)       //Popluate the martix randomly
{
    for(int i=0;i<r;i++)                            //Iterates the rows
        for(int j=0;j<c;j++)                        //Iterates the columns
            mat[i*c+j]=rand()%k;                    //Assign radnom value less than k
    printf("Successfully populated the matrix.\n");
}

void show(int mat[], int r, int c)                  //Displays the matrix
{
    printf("The matrix is:\n");
    for(int i=0;i<r;i++)                            //Iterates the rows
    {
        for(int j=0;j<c;j++)                        //Iterates the columns
            printf("%d\t",mat[i*c+j]);              //Prints the items
        printf("\n");                               //Prints a newline after each row
    }
}

void leftUpper(int mat[], int r, int c)             //Displays the left-upper tirnagular matrix
{
    int i,j;
    printf("The left-upper triangular matrix is:\n");
    for(i=0;i<r;i++)                                //Iterates the rows
    {
        for(j=0;j<c;j++)                            //Iterates the columns
        {
            if(i+j<=r-1)                            //If i+j<=r-1, it is an item of left-upper triangular matrix
                printf("%d\t",mat[i*c+j]);          //prints the items
            else
                printf("\t");                       //Otherwise, prints a tab space
        }
        printf("\n");                               //Prints a newline after each row
    }
}

void leftLower(int mat[], int r, int c)             //Displays the left-lower tirnagular matrix
{
    int i,j;
    printf("The left-lower triangular matrix is:\n");
    for(i=0;i<r;i++)                                //Iterates the rows
    {
        for(j=0;j<c;j++)                            //Iterates the volumns
        {
            if(i>=j)                                //If i>=j, it is an item of left-lower triangular matrix
                printf("%d\t",mat[i*c+j]);          //prints the items
            else
                printf("\t");                       //Otherwise, prints a tab space
        }
        printf("\n");                               //Prints a newline after each row
    }
}

void rightUpper(int mat[], int r, int c)             //Displays the right-upper tirnagular matrix
{
    int i,j;
    printf("The right-upper triangular matrix is:\n");
    for(i=0;i<r;i++)                                //Iterates the rows
    {
        for(j=0;j<c;j++)                            //Iterates the columns
        {
            if(i<=j)                                //If i<=j, it is an item of right-upper triangular matrix
                printf("%d\t",mat[i*c+j]);          //Prints the item of right-upper triangular matrix
            else
                printf("\t");                       //Otherwise, prints a tab space
        }
        printf("\n");                               //Prints a newline after each row
    }
}


void rightLower(int mat[], int r, int c)            //Displays the right-lower tirnagular matrix
{
    int i,j;
    printf("The right-lower triangular matrix is:\n");
    for(i=0;i<r;i++)                                //Iterates the rows
    {
        for(j=0;j<c;j++)                            //Iterates the columns
        {
            if(i+j>=r-1)                            //If i+j>=r-1, it is an item of right-lower triangular matrix
                printf("%d\t",mat[i*c+j]);          //Prints the item of right-lower triangular matrix
            else
                printf("\t");                       //Otherwise, prints a tab space
        }
        printf("\n");                               //Prints a newline after each row
    }
}

int main()
{
    int r=4, c=4, mat[100];
    
    populate(mat, r, c, 10);            //Populate the matrix randomly less than 10
    show(mat, r, c);                    //Displays the matrix
    
    leftUpper(mat, r, c);               //Displays the left-upper triangular matrix
    
    leftLower(mat, r, c);               //Displays the left-lower triangular matrix
    
    rightUpper(mat, r, c);              //Displays the right-upper triangular matrix
    
    rightLower(mat, r, c);              //Displays the right-lower triangular matrix

    return 0;
}