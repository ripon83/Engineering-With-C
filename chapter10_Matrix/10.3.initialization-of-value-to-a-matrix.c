/*
 * Program: Initialization Of Value To A Matrix
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int mat[3][4]={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    int r=3, c=4;
    printf("The Matrix is:\n");  // Display output
    for(int i=0; i<r; i++)              //Number of rows
    {
        for(int j=0; j<c; j++)          //Number of columns
        {
            printf("%d\t", mat[i][j]);   //Printing each items
        }
        printf("\n");                   //Printing new line after each row
    }
    return 0;  // Indicate successful program termination
}
