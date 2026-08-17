/*
 * Program: Assigning Values To A Matrix 2
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int mat[3][4], count=1, r=3, c=4;
    for(int i=0; i<r; i++)              //Number of rows
    {
        for(int j=0; j<c; j++)          //Number of columns
        {
            mat[i][j] = count;          //assigning the value to the mat[i][j]
            count++;                    //Increment the counter after each iteration
        }
    }
    printf("The Matrix is:\n");  // Display output
    for(int i=0; i<r; i++)              //Number of rows
    {
        for(int j=0; j<c; j++)          //Number of columns
        {
            printf("%d\t", mat[i][j]);   //Printing the matrix items
        }
        printf("\n");                   //Printing new line after each row
    }
    return 0;  // Indicate successful program termination
}
