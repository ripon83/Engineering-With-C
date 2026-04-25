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

void mult(int r, int c, int matA[r][c], int p, int q, int matB[p][q], int res[r][q])
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
            res[i][j]=0;        //Initializing to zero for each cell
            for(k=0;k<p;k++)    //Iterates rows or columns
                res[i][j]=res[i][j]+matA[i][k]*matB[k][j];  //Multiply the items
        }
    }
}
int main()
{
    int matA[10][10], matB[10][10], res[10][10];
    int r=3, c=4, p=4, q=3;
    populate(r, c, matA, 5);        //Populates the matA[][] with random numbers less than 5
    populate(p, q, matB, 5);        //Populates the matB[][] with random numbers less than 5
    
    printf("\nMatrix A:\n");
    show(r, c, matA);               //Displays the matrix matA
    
    printf("\nMatrix B:\n");
    show(p, q, matB);               //Displays the matrix matB
                            //Multiplies matA[][] and matB[][], stores the result res[][]
    mult(r, c, matA, p, q, matB, res);      
    
    printf("\nThe resultant matrix after multiplication is:\n");
    show(r, q, res);                //Displays the resultant matrix
    return 0;
}