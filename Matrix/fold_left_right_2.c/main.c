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

void foldRight(int mat[], int r, int c, int res[])
{
    for(int i=0; i<r; i++)              //Iterates the rows 
    {
        for(int j=0; j<c; j++)          //Iterates the columns
        {
            if(i==j)                    //If i==j, just copy the items
                res[i*c+j]=mat[i*c+j];
            else
            if(i<j)                     //If i<j, fold the matrix mat[][]
                res[i*c+j]=mat[i*c+j]+mat[j*c+i];
            else
                res[i*c+j]=0;            //Otherwise, clear the matrix cell
        }
    }
}

void foldLeft(int mat[], int r, int c, int res[])
{
    for(int i=0; i<r; i++)          //Iterates the rows
    {
        for(int j=0; j<c; j++)      //Iterates the columns
        {
            if(i+j==r-1)            //If i+j<=r-1, just copy the item
                res[i*c+j]=mat[i*c+j];
            else
            if((i+j)<r)             //If i+j<r, fold the matrix mat[][]
                res[i*c+j]=mat[i*c+j]+mat[(r-j-1)*c+(c-i-1)];
            else
                res[i*c+j]=0;        //Otherwise, clear the matrix cell
        }
    }
}

int main()
{
    int r=4, c=4;
    int mat[100], res1[100], res2[100];
    populate(mat, r, c, 10);          //Populates the matA[][] randomly with less than 10
    printf("The matrix is:\n");
    show(mat, r, c);                //Displays the matrix mat[][]
    
    printf("The right-folded matrix is:\n");
    foldRight(mat, r, c, res1); //Folds right the mat[][] and stroes the result in res1[][]
    show(res1, r, c);               //Displays the folded matrix
    
    printf("The left-folded matrix is:\n");
    foldLeft(mat, r, c, res2); //Folds right the mat[][] and stroes the result in res2[][]    
    show(res2, r, c);               //Displays the folded matrix
    return 0;
}