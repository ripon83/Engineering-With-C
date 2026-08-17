/*
 * Program: Sparse Matrix
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include<stdio.h>
void display(int t, int cm[3][t])       //Displays the compact matrix
{
    for (int i=0; i<3; i++)             //Three rows are fixed
    {
        for (int j=0; j<t; j++)         //Iterates t columns
            printf("%d ", cm[i][j]);     //Prints the matrix items
        printf("\n");  // Display output
    }
}

int count(int m, int n, int sm[m][n])   //Counts non-zero items
{
    int count=0;                         //Initializes the counter to zero

    for (int i=0; i<m; i++)             //Iterates the rows
        for (int j=0; j<n; j++)         //Iterates the columns
            if (sm[i][j]!=0)             //Checks for a non-zero entry
                count++;                 //Counts the non-zero item

    return count;                        //Returns total non-zero items
}

void sparse(int r, int c, int sm[r][c], int t, int cm[][t])
{
    int k=0;                             //Column index of compact matrix

    for (int i=0; i<r; i++)             //Iterates the rows
    {
        for (int j=0; j<c; j++)         //Iterates the columns
        {
            if (sm[i][j]!=0)             //If the item is non-zero
            {
                cm[0][k]=i;              //Stores the row index
                cm[1][k]=j;              //Stores the column index
                cm[2][k]=sm[i][j];       //Stores the value
                k++;                     //Moves to next compact column
            }
        }
    }
}

int main()  // Main function: execution starts here
{
    int r=4, c=5;
    int sm[][5] =
            {
                {0 , 0 , 3 , 0 , 4 },
                {0 , 0 , 5 , 7 , 0 },
                {0 , 0 , 0 , 0 , 0 },
                {0 , 2 , 6 , 0 , 0 }
            };

    int t=count(r, c, sm);        //Counts the non-zero entries
    int cm[3][t];                 //Compact matrix of 3 rows and t columns

    sparse(r, c, sm, t, cm);      //Converts sparse matrix to compact matrix

    printf("The sparse matrix is:\n");  // Display output
    show(r, c, sm);               //Displays the original sparse matrix

    printf("\nThe compact matrix is:\n");  // Display output
    display(t, cm);               //Displays the compact matrix

    return 0;  // Indicate successful program termination
}
