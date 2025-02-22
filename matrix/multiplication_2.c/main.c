#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void populate(int mat[], int r, int c, int k)   //Randomly populating the matrix
{
    srand(clock());                 //Changing the seed value of rand()
    for(int i=0; i<r; i++)          //Number of rows
        for(int j=0; j<c; j++)      //Number of columns
            mat[i*c+j]=rand()%k;     //Assigning random number less than k
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

void mult(int matA[], int r, int c, int matB[], int p, int q, int res[])
{
    int i,j,k;
    if(c!=p)                    //Checking the compatibility of the matrix
    {
        printf("No multiplication!");   //Incompatible matrices, no multiply
        return;                         //Exits the function     
    }
    for(i=0;i<r;i++)            //Iterates the rows
    {
        for(j=0;j<c;j++)        //Iteares the column
        {
            res[i*c+j]=0;        //Initializing to zero for each cell
            for(k=0;k<p;k++)    //Iterates rows or columns
                res[i*c+j]=res[i*c+j]+matA[i*c+k]*matB[k*q+j];  //Multiply the items
        }
    }
}

int main()
{
    int matA[100], matB[100], res[100];
    int r=3, c=4, p=4, q=3;
    populate(matA, r, c, 5);        //Populates the matA[][] with random numbers less than 5
    populate(matB, p, q, 5);        //Populates the matB[][] with random numbers less than 5
    
    printf("\nMatrix A:\n");
    show(matA, r, c);               //Displays the matrix matA
    
    printf("\nMatrix B:\n");
    show(matB, p, q);               //Displays the matrix matB
                    
    mult(matA, r, c, matB, p, q, res);  //Multiplies matA[][] and matB[][], stores the result res[][]
    
    printf("\nThe resultant matrix after multiplication is:\n");
    show(res, r, q);                //Displays the resultant matrix
    return 0;
}