#include <stdio.h>
int isSafe(int n, int board[n][n], int row, int col) 
{
    for(int i=0; i<col; i++)                        // Check this row on the left side
        if(board[row][i])                           //If the row contains a queen
            return 0;                               //Return 0, i.e., it is not safe
    for (int i=row, j=col; i>=0 && j>=0; i--, j--)  // Check upper diagonal on the left side
        if (board[i][j])                            //If the upper diagonal contains a queen
            return 0;                               //Return 0, i.e., it is not safe
    for (int i=row, j=col; j>=0 && i<n; i++, j--)   // Check lower diagonal on the left side
        if (board[i][j])                            //If the lower diagonal contains queen
            return 0;                               //Return 0, i.e., it is not safe
    return 1;                                       //Return 1, i.e., it is safe to place a queen
}

int nQueens(int n, int board[n][n], int col) 
{
    if(col>=n)
        return 1;
    for (int i=0; i<n; i++) 
    {
        if (isSafe(n,board,i,col)) 
        {
            board[i][col]=1;
            if (nQueens(n,board,col+1))
                return 1;
            board[i][col] = 0; // Backtrack
        }
    }
    return 0;
}

void printBoard(int n, int board[n][n]) 
{
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<n; j++)
            printf(" %c ", board[i][j] ? 'Q' : '.');
        printf("\n");
    }
}

int main() 
{
    int n=5;
    int board[][100]={0};
    if (nQueens(n,board, 0))
        printBoard(n,board);
    else
        printf("Solution does not exist");
    return 0;
}