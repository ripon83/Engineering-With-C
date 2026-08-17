/*
 * Program: Printing All Possible Solutions
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int isSafe(int n, int board[n][n], int row, int col) 
{
    for(int i=0; i<col; i++)  // Iterate over array elements
        if(board[row][i])
            return 0;  // Indicate successful program termination
    for (int i=row, j=col; i>=0 && j>=0; i--, j--)  // Iterate over array elements
        if (board[i][j])
            return 0;  // Indicate successful program termination
    for (int i=row, j=col; j>=0 && i<n; i++, j--)  // Iterate over array elements
        if (board[i][j])
            return 0;  // Indicate successful program termination
    return 1;
}
void printBoard(int n, int board[n][n]) 
{
    static int count=1;
    printf("\nSolution: %d\n", count++);  // Display output
    for (int i=0; i<n; i++)   // Iterate over array elements
    {
        for (int j=0; j<n; j++)  // Iterate over array elements
            printf(" %c ", board[i][j] ? 'Q' : '+');  // Display output
        printf("\n");  // Display output
    }
}
void solveNQueens(int n, int board[n][n], int col) 
{
    if(col>=n)
        printBoard(n, board);
    for (int i=0; i<n; i++)   // Iterate over array elements
    {
        if (isSafe(n, board, i, col)) 
        {
            board[i][col]=1;
            solveNQueens(n, board, col+1);
            board[i][col] = 0; 
        }
    }
}
int main()   // Main function: execution starts here
{
    int n=5;
    int board[][100]={0};
    solveNQueens(n, board, 0);
    return 0;  // Indicate successful program termination
}
