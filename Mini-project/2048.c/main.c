#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Game 
{
    int **board;
    int size;
}game;

void init(game *g, int n)
{
    g->size=n;
    g->board=(int **)malloc(sizeof(int *)*n);
    for(int i=0; i<n; i++)
    {
        g->board[i]=(int *)malloc(sizeof(int)*n);
        for(int j=0; j<n; j++)
            g->board[i][j]=0;
    }
}

void printBoard(game *g) 
{
    printf("\n");
    for(int i=0; i<g->size; i++)
        printf("-------");
    printf("\n");
    for (int i = 0; i < g->size; i++) {
        for (int j = 0; j < g->size; j++) {
            if (g->board[i][j] == 0)
                printf("|     ");
            else
                printf("| %4d", g->board[i][j]);
        }
        printf("|\n");
        for(int i=0; i<g->size; i++)
            printf("-------");
        printf("\n");
    }
}

void addRandom(game *g) 
{
    int empty[g->size * g->size][2], count = 0;
    
    for (int i = 0; i < g->size; i++)
        for (int j = 0; j < g->size; j++)
            if (g->board[i][j] == 0) 
            {
                empty[count][0] = i;
                empty[count][1] = j;
                count++;
            }

    if (count > 0) 
    {
        int r = rand() % count;
        g->board[empty[r][0]][empty[r][1]] = (rand() % 2 + 1) * 2; // 2 or 4
    }
}

void compress(game *g, int row[]) 
{
    int temp[g->size], pos = 0;
    for(int i=0; i<g->size; i++)
        temp[i]=0;
    for (int i = 0; i < g->size; i++)
        if (row[i] != 0)
            temp[pos++] = row[i];
    for (int i = 0; i < g->size; i++)
        row[i] = temp[i];
}

void merge(game *g, int row[]) 
{
    for (int i = 0; i < g->size - 1; i++) 
    {
        if (row[i] == row[i+1] && row[i] != 0) 
        {
            row[i] *= 2;
            row[i+1] = 0;
            i++; 
        }
    }
}

void moveLeft(game *g) 
{
    for (int i = 0; i < g->size; i++) {
        compress(g, g->board[i]);
        merge(g, g->board[i]);
        compress(g, g->board[i]);
    }
}

void moveRight(game *g) 
{
    for (int i = 0; i < g->size; i++) 
    {
        int row[g->size];
        for (int j = 0; j < g->size; j++)
            row[j] = g->board[i][g->size - j - 1];

        compress(g, row);
        merge(g, row);
        compress(g, row);

        for (int j = 0; j < g->size; j++)
            g->board[i][g->size - j - 1] = row[j];
    }
}

void moveUp(game *g) 
{
    for (int col = 0; col < g->size; col++) 
    {
        int row[g->size];
        for (int i = 0; i < g->size; i++)
            row[i] = g->board[i][col];

        compress(g, row);
        merge(g, row);
        compress(g, row);

        for (int i = 0; i < g->size; i++)
            g->board[i][col] = row[i];
    }
}

void moveDown(game *g) 
{
    for (int col = 0; col < g->size; col++) 
    {
        int row[g->size];
        for (int i = 0; i < g->size; i++)
            row[i] = g->board[g->size - i - 1][col];

        compress(g, row);
        merge(g, row);
        compress(g, row);

        for (int i = 0; i < g->size; i++)
            g->board[g->size - i - 1][col] = row[i];
    }
}

int isGameOver(game *g) 
{
    for (int i = 0; i < g->size; i++)
        for (int j = 0; j < g->size; j++)
            if (g->board[i][j] == 0) return 0;  // empty cell exists

    // check merge possible
    for (int i = 0; i < g->size; i++)
        for (int j = 0; j < g->size - 1; j++)
            if (g->board[i][j] == g->board[i][j+1] || g->board[j][i] == g->board[j+1][i])
                return 0;

    return 1; // no moves
}

void copy(game *old, game *g)
{
    for(int i=0; i < g->size; i++)
        for(int j=0; j < g->size; j++)
            old->board[i][j] = g->board[i][j];
}

void play(game *g) 
{
    
    srand(time(NULL));

    addRandom(g);
    addRandom(g);

    char ch;

    while (1) 
    {
        system("clear");
        
        printBoard(g);

        if (isGameOver(g)) 
        {
            printf("\nGAME OVER! No moves left.\n");
            break;
        }

        printf("\nMove (w=up, s=down, a=left, d=right): ");
        scanf(" %c", &ch);

        game *old = (game *)malloc(sizeof(game));
        init(old, g->size);
        copy(old, g);

        if (ch == 'a') moveLeft(g);
        else if (ch == 'd') moveRight(g);
        else if (ch == 'w') moveUp(g);
        else if (ch == 's') moveDown(g);
        else 
        {
            printf("Invalid input!\n");
            continue;
        }

        int changed = 0;
        for (int i = 0; i < g->size; i++)
            for (int j = 0; j < g->size; j++)
                if (old->board[i][j] != g->board[i][j])
                    changed = 1;

        if (changed)
            addRandom(g);
        free(old);
    }
}

int main() 
{
    int n=0;
    game *g=(game *)malloc(sizeof(game));
    printf("Enter the board size: ");
    scanf("%d",&n);
    init(g, n);
    play(g);
    return 0;
}
