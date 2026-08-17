/*
 * Program: N Queens Problem
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int isSafe(int n, int board[n][n], int row, int col) 
{
    // Check this row on the left side
    for(int i=0; i<col; i++)  // Iterate over array elements
        if(board[row][i])
            return 0;  // Indicate successful program termination
    // Check the upper diagonal on the left side
    for (int i=row, j=col; i>=0 && j>=0; i--, j--)  // Iterate over array elements
        if (board[i][j])
            return 0;  // Indicate successful program termination
    // Check the lower diagonal on the left side
    for (int i=row, j=col; j>=0 && i<n; i++, j--)  // Iterate over array elements
        if (board[i][j])
            return 0;  // Indicate successful program termination
    return 1;
}

int solveNQueens(int n, int board[n][n], int col) 
{
    if(col>=n)
        return 1;
    for (int i=0; i<n; i++)   // Iterate over array elements
    {
        if (isSafe(n, board, i, col)) 
        {
            board[i][col]=1;
            if(solveNQueens(n, board, col+1))
                return 1;
            board[i][col] = 0; // Backtrack
        }
    }
    return 0;  // Indicate successful program termination
}

void printBoard(int n, int board[n][n]) 
{
    for (int i=0; i<n; i++)   // Iterate over array elements
    {
        for (int j=0; j<n; j++)  // Iterate over array elements
            printf(" %c ", board[i][j] ? 'Q' : '.');  // Display output
        printf("\n");  // Display output
    }
}

int main()   // Main function: execution starts here
{
    int n=10;
    int board[][n+1]={0};
    if (solveNQueens(n, board, 0))
        printBoard(n, board);
    else
        printf("Solution does not exist");  // Display output
    return 0;  // Indicate successful program termination
}
