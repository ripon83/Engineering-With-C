/*
 * Program: Display A Matrix
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void populate(int r, int c, int mat[r][c], int k)   //Randomly populating the matrix
{
    srand(clock());                 //Changing the seed value of rand()
    for(int i=0; i<r; i++)          //Number of rows
        for(int j=0; j<c; j++)      //Number of columns
            mat[i][j]=rand()%k;     //Assigning random number less than k
    printf("Successfully populated the matrix.\n");  // Display output
}
void show(int r, int c, int mat[r][c])
{
    for(int i=0; i<r; i++)              //Number of rows
    {
        for(int j=0; j<c; j++)          //Number of column
            printf("%d\t", mat[i][j]);   //Printing each item
        printf("\n");                   //Print newline after each row
    }
}
int main()  // Main function: execution starts here
{
    int r=3, c=4, mat[10][10];    
    populate(r, c, mat, 5);         //Populating the matrix randomly
    printf("\nThe matrix is:\n");  // Display output
    show(r, c, mat);                //Displaying the matrix
    return 0;  // Indicate successful program termination
}
