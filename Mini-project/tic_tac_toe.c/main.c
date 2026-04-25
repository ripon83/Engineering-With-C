#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Game
{
    char board[3][3];
    int mode;   
} game;

void initBoard(game *g) 
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            g->board[i][j] = ' ';
}

void printBoard(game *g) 
{
    printf("\n");
    for (int i = 0; i < 3; i++) 
    {
        printf(" %c | %c | %c ", g->board[i][0], g->board[i][1], g->board[i][2]);
        if (i < 2) 
            printf("\n---+---+---\n");
    }
    printf("\n");
}

int checkWin(game *g) 
{
    char (*b)[3] = g->board;

    for (int i = 0; i < 3; i++) 
    {
        if (b[i][0] == b[i][1] && b[i][1] == b[i][2] && b[i][0] != ' ')
            return 1;
        if (b[0][i] == b[1][i] && b[1][i] == b[2][i] && b[0][i] != ' ')
            return 1;
    }

    if (b[0][0] == b[1][1] && b[1][1] == b[2][2] && b[0][0] != ' ')
        return 1;
    if (b[0][2] == b[1][1] && b[1][1] == b[2][0] && b[0][2] != ' ')
        return 1;

    return 0;
}

int isFull(game *g) 
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (g->board[i][j] == ' ')
                return 0;
    return 1;
}

void playerMove(game *g, char sym) 
{
    int r, c;
    while (1) 
    {
        printf("Enter row and column (1-3 1-3): ");
        scanf("%d%d", &r, &c);
        r--; 
        c--;
        if (r < 0 || r > 2 || c < 0 || c > 2) 
        {
            printf("Invalid position!\n");
            continue;
        }

        if (g->board[r][c] != ' ') 
        {
            printf("Cell already taken!\n");
            continue;
        }
        g->board[r][c] = sym;
        break;
    }
}

int getRand()
{
    int r;
    srand(clock()^(unsigned long)(&r));
    r=rand();
    for(int i=0; i<r%97; i++)
    {
        srand(clock()^r);
        r=rand();
    }
    return r;
}

void computerMove(game *g) 
{
    printf("Computer's move...\n");
    int r, c;
    
    while (1) 
    {
        r = getRand() % 3;
        c = getRand() % 3;
        if (g->board[r][c] == ' ') 
        {
            g->board[r][c] = 'O';
            break;
        }
    }
}

void play(game *g) 
{

    printf("Select mode:\n1. Two Players\n2. User vs Computer\nEnter: ");
    scanf("%d", &g->mode);

    char turn = 'X';

    while (1) 
    {
        printBoard(g);
        if (turn == 'X') 
        {
            printf("Player X turn\n");
            playerMove(g, 'X');
        } 
        else 
        {
            if (g->mode == 1) 
            {
                printf("Player O turn\n");
                playerMove(g, 'O');
            } 
            else 
                computerMove(g);
        }

        if (checkWin(g)) {
            printBoard(g);
            printf("\n%c WINS!\n", turn);
            break;
        }

        if (isFull(g)) 
        {
            printBoard(g);
            printf("\nIt's a DRAW!\n");
            break;
        }

        turn = (turn == 'X') ? 'O' : 'X';
    }
}

int main() 
{
    game *g=(game *)malloc(sizeof(game));
    initBoard(g);
    play(g);
    return 0;
}
