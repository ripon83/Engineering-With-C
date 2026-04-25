/* tic_tac_toe_topdown.c
   Top-down Tic-Tac-Toe:
   - No forward declarations (no prototypes)
   - main() only calls play()
   - Two-player & User vs Computer
   - Minimax for 3x3 (perfect)
   - Depth-limited minimax + heuristic for 5x5 (win=4)
   - Replay, Scoreboard, Colors, Menu
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <string.h>

#define COLOR_RED    "\x1b[31m"
#define COLOR_BLUE   "\x1b[34m"
#define COLOR_GREEN  "\x1b[32m"
#define COLOR_RESET  "\x1b[0m"

typedef struct {
    int size;       // board size (3 or 5)
    int win_len;    // how many in row to win (3 for 3x3, 4 for 5x5)
    char **board;   // dynamic 2D board [size][size]
    int mode;       // 1 = two players, 2 = user vs computer
    int scores[4];  // X wins, O wins, Computer wins, Draws
} Game;

/* ----------------------- Low level utils ----------------------- */

void clear_stdin() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {}
}

char opponent(char p) {
    return (p == 'X') ? 'O' : 'X';
}

int in_bounds(Game *g, int r, int c) {
    return (r >= 0 && r < g->size && c >= 0 && c < g->size);
}

/* ----------------------- Board management ----------------------- */

void allocBoard(Game *g) {
    g->board = (char **)malloc(g->size * sizeof(char *));
    for (int i = 0; i < g->size; ++i) {
        g->board[i] = (char *)malloc(g->size * sizeof(char));
    }
}

void freeBoard(Game *g) {
    if (!g->board) return;
    for (int i = 0; i < g->size; ++i) free(g->board[i]);
    free(g->board);
    g->board = NULL;
}

void initBoard(Game *g) {
    for (int i = 0; i < g->size; ++i)
        for (int j = 0; j < g->size; ++j)
            g->board[i][j] = ' ';
}

/* ----------------------- Printing (with colors) ----------------------- */

void printCell(char ch) {
    if (ch == 'X') printf(COLOR_RED "%c" COLOR_RESET, ch);
    else if (ch == 'O') printf(COLOR_BLUE "%c" COLOR_RESET, ch);
    else printf("%c", ch);
}

void printBoard(Game *g) {
    printf("\n");
    for (int i = 0; i < g->size; ++i) {
        for (int j = 0; j < g->size; ++j) {
            printf(" ");
            printCell(g->board[i][j]);
            if (j < g->size - 1) printf(" |");
        }
        printf("\n");
        if (i < g->size - 1) {
            for (int k = 0; k < g->size; ++k) {
                printf("---");
                if (k < g->size - 1) printf("+");
            }
            printf("\n");
        }
    }
    printf("\n");
}

/* ----------------------- Game state checks (generalized) ----------------------- */

/* Check if a particular player 'p' has a winning line on the board.
   Works for any board size and win_len. Returns 1 if p wins, 0 otherwise. */
int playerHasWon(Game *g, char p) {
    int n = g->size, w = g->win_len;

    // Check rows
    for (int r = 0; r < n; ++r) {
        for (int c = 0; c + w - 1 < n; ++c) {
            int k;
            for (k = 0; k < w; ++k) {
                if (g->board[r][c + k] != p) break;
            }
            if (k == w) return 1;
        }
    }

    // Check cols
    for (int c = 0; c < n; ++c) {
        for (int r = 0; r + w - 1 < n; ++r) {
            int k;
            for (k = 0; k < w; ++k) {
                if (g->board[r + k][c] != p) break;
            }
            if (k == w) return 1;
        }
    }

    // Check diagonal down-right
    for (int r = 0; r + w - 1 < n; ++r) {
        for (int c = 0; c + w - 1 < n; ++c) {
            int k;
            for (k = 0; k < w; ++k) {
                if (g->board[r + k][c + k] != p) break;
            }
            if (k == w) return 1;
        }
    }

    // Check diagonal up-right
    for (int r = w - 1; r < n; ++r) {
        for (int c = 0; c + w - 1 < n; ++c) {
            int k;
            for (k = 0; k < w; ++k) {
                if (g->board[r - k][c + k] != p) break;
            }
            if (k == w) return 1;
        }
    }

    return 0;
}

int isFull(Game *g) {
    for (int i = 0; i < g->size; ++i)
        for (int j = 0; j < g->size; ++j)
            if (g->board[i][j] == ' ') return 0;
    return 1;
}

/* ----------------------- Heuristic evaluation -----------------------
   For 3x3 we use direct win/loss scores (minimax).
   For larger board (5x5 with win_len 4) we use a simple heuristic:
   +1000 for computer win, -1000 for opponent win,
   otherwise count open lines for each player.
*/

int evaluateHeuristic(Game *g, char ai, char hu) {
    if (playerHasWon(g, ai)) return 100000;
    if (playerHasWon(g, hu)) return -100000;

    int score = 0;
    int n = g->size, w = g->win_len;

    // For every possible segment of length w, evaluate:
    for (int r = 0; r < n; ++r) {
        for (int c = 0; c + w - 1 < n; ++c) {
            int aiCount = 0, huCount = 0;
            for (int k = 0; k < w; ++k) {
                char ch = g->board[r][c + k];
                if (ch == ai) aiCount++;
                else if (ch == hu) huCount++;
            }
            if (aiCount > 0 && huCount == 0) score += (1 << aiCount);
            if (huCount > 0 && aiCount == 0) score -= (1 << huCount);
        }
    }
    for (int c = 0; c < n; ++c) {
        for (int r = 0; r + w - 1 < n; ++r) {
            int aiCount = 0, huCount = 0;
            for (int k = 0; k < w; ++k) {
                char ch = g->board[r + k][c];
                if (ch == ai) aiCount++;
                else if (ch == hu) huCount++;
            }
            if (aiCount > 0 && huCount == 0) score += (1 << aiCount);
            if (huCount > 0 && aiCount == 0) score -= (1 << huCount);
        }
    }
    // diag down-right
    for (int r = 0; r + w - 1 < n; ++r) {
        for (int c = 0; c + w - 1 < n; ++c) {
            int aiCount = 0, huCount = 0;
            for (int k = 0; k < w; ++k) {
                char ch = g->board[r + k][c + k];
                if (ch == ai) aiCount++;
                else if (ch == hu) huCount++;
            }
            if (aiCount > 0 && huCount == 0) score += (1 << aiCount);
            if (huCount > 0 && aiCount == 0) score -= (1 << huCount);
        }
    }
    // diag up-right
    for (int r = w - 1; r < n; ++r) {
        for (int c = 0; c + w - 1 < n; ++c) {
            int aiCount = 0, huCount = 0;
            for (int k = 0; k < w; ++k) {
                char ch = g->board[r - k][c + k];
                if (ch == ai) aiCount++;
                else if (ch == hu) huCount++;
            }
            if (aiCount > 0 && huCount == 0) score += (1 << aiCount);
            if (huCount > 0 && aiCount == 0) score -= (1 << huCount);
        }
    }

    return score;
}

/* ----------------------- Minimax (general) -----------------------
   We'll use:
   - For 3x3: full minimax (depth = remaining cells)
   - For 5x5: depth limited (to keep runtime OK) and heuristic eval
*/

int minimax(Game *g, int depth, int maximizing, char ai, char hu, int alpha, int beta) {
    if (playerHasWon(g, ai)) return 100000 - (100 - depth);
    if (playerHasWon(g, hu)) return -100000 + (100 - depth);
    if (isFull(g) || depth == 0) {
        if (g->size == 3) return 0; // draw for full 3x3
        return evaluateHeuristic(g, ai, hu);
    }

    if (maximizing) {
        int best = INT_MIN;
        for (int i = 0; i < g->size; ++i) {
            for (int j = 0; j < g->size; ++j) {
                if (g->board[i][j] == ' ') {
                    g->board[i][j] = ai;
                    int val = minimax(g, depth - 1, 0, ai, hu, alpha, beta);
                    g->board[i][j] = ' ';
                    if (val > best) best = val;
                    if (best > alpha) alpha = best;
                    if (beta <= alpha) return best; // beta cut-off
                }
            }
        }
        return best;
    } else {
        int best = INT_MAX;
        for (int i = 0; i < g->size; ++i) {
            for (int j = 0; j < g->size; ++j) {
                if (g->board[i][j] == ' ') {
                    g->board[i][j] = hu;
                    int val = minimax(g, depth - 1, 1, ai, hu, alpha, beta);
                    g->board[i][j] = ' ';
                    if (val < best) best = val;
                    if (best < beta) beta = best;
                    if (beta <= alpha) return best; // alpha cut-off
                }
            }
        }
        return best;
    }
}

/* Choose best move for computer 'ai' symbol.
   For size==3 we run full minimax.
   For size==5 we run depth-limited minimax and prefer center / better heuristics. */
void findBestMove(Game *g, int *out_r, int *out_c, char ai) {
    char hu = opponent(ai);
    int bestVal = INT_MIN;
    int bestR = -1, bestC = -1;

    int emptyCount = 0;
    for (int i = 0; i < g->size; ++i)
        for (int j = 0; j < g->size; ++j)
            if (g->board[i][j] == ' ') emptyCount++;

    int depthLimit;
    if (g->size == 3) depthLimit = emptyCount; // full search
    else depthLimit = 4; // for 5x5, limit to 4 plies (adjustable)

    // If early and 5x5, try center first to speed up
    if (g->size == 5) {
        int mid = g->size / 2;
        if (g->board[mid][mid] == ' ') {
            *out_r = mid; *out_c = mid; return;
        }
    }

    for (int i = 0; i < g->size; ++i) {
        for (int j = 0; j < g->size; ++j) {
            if (g->board[i][j] == ' ') {
                g->board[i][j] = ai;
                int moveVal = minimax(g, depthLimit - 1, 0, ai, hu, INT_MIN, INT_MAX);
                g->board[i][j] = ' ';
                if (moveVal > bestVal) {
                    bestVal = moveVal;
                    bestR = i; bestC = j;
                }
            }
        }
    }

    if (bestR == -1) { // fallback random
        int r, c;
        do {
            r = rand() % g->size;
            c = rand() % g->size;
        } while (g->board[r][c] != ' ');
        *out_r = r; *out_c = c;
    } else {
        *out_r = bestR; *out_c = bestC;
    }
}

/* ----------------------- Moves (player/computer) ----------------------- */

void playerMove(Game *g, char sym) {
    int r, c;
    while (1) {
        printf("Player %c — enter row and column (1-%d 1-%d): ", sym, g->size, g->size);
        if (scanf("%d %d", &r, &c) != 2) {
            printf("Invalid input. Try again.\n");
            clear_stdin();
            continue;
        }
        clear_stdin();
        r--; c--;
        if (!in_bounds(g, r, c)) {
            printf("Out of bounds. Try again.\n");
            continue;
        }
        if (g->board[r][c] != ' ') {
            printf("Cell already taken. Try again.\n");
            continue;
        }
        g->board[r][c] = sym;
        break;
    }
}

void computerMove(Game *g, char sym) {
    printf("Computer's move (%c)...\n", sym);
    int r, c;
    findBestMove(g, &r, &c, sym);
    g->board[r][c] = sym;
}

/* ----------------------- Single game runner ----------------------- */

void playSingleGame(Game *g) {
    initBoard(g);
    char turn = 'X';
    int humanFirst = 1;

    if (g->mode == 2) {
        // Ask who goes first vs computer
        int choice;
        printf("Who starts?\n1. You (X)\n2. Computer (X)\nEnter choice: ");
        if (scanf("%d", &choice) != 1) { clear_stdin(); choice = 1; }
        clear_stdin();
        if (choice == 2) humanFirst = 0;
        if (!humanFirst) turn = 'X'; // computer will play first as X
    }

    while (1) {
        printBoard(g);

        if (g->mode == 1) { // two players
            printf("Player %c's turn.\n", turn);
            playerMove(g, turn);
        } else { // user vs comp
            if (turn == 'X') {
                // X is always human in our setup unless user chose computer to be X earlier
                if (humanFirst) playerMove(g, 'X');
                else computerMove(g, 'X');
            } else { // O turn
                if (humanFirst) computerMove(g, 'O');
                else playerMove(g, 'O');
            }
        }

        // Check win
        if (playerHasWon(g, turn)) {
            printBoard(g);
            printf(COLOR_GREEN "Player %c WINS!\n" COLOR_RESET, turn);
            if (g->mode == 2) {
                // if computer symbol matches winner count Computer wins
                if ((turn == 'X' && !humanFirst) || (turn == 'O' && humanFirst)) {
                    g->scores[2]++; // computer wins
                } else {
                    if (turn == 'X') g->scores[0]++; else g->scores[1]++;
                }
            } else {
                if (turn == 'X') g->scores[0]++; else g->scores[1]++;
            }
            break;
        }

        if (isFull(g)) {
            printBoard(g);
            printf("It's a DRAW!\n");
            g->scores[3]++;
            break;
        }

        turn = opponent(turn);
    }
}

/* ----------------------- UI: scoreboard and menu ----------------------- */

void printScores(Game *g) {
    printf("\nSCOREBOARD:\n");
    printf(COLOR_RED "X wins: %d" COLOR_RESET "\n", g->scores[0]);
    printf(COLOR_BLUE "O wins: %d" COLOR_RESET "\n", g->scores[1]);
    printf("Computer wins: %d\n", g->scores[2]);
    printf("Draws: %d\n\n", g->scores[3]);
}

void showRules(Game *g) {
    printf("\nRULES:\n");
    printf("- Board: %dx%d. Need %d in a row to win.\n", g->size, g->size, g->win_len);
    printf("- Players alternate placing X and O.\n");
    printf("- First to get %d in a row (horizontal, vertical, diagonal) wins.\n", g->win_len);
    printf("- In User vs Computer, you can choose who starts.\n\n");
}

/* ----------------------- High level play() (menu + replay) ----------------------- */

void play() {
    Game g;
    g.board = NULL;
    g.scores[0] = g.scores[1] = g.scores[2] = g.scores[3] = 0;

    srand((unsigned int)time(NULL));

    while (1) {
        printf("\n=== Tic-Tac-Toe ===\n");
        printf("1. Play (Two Players)\n");
        printf("2. Play (User vs Computer)\n");
        printf("3. Choose board size (current %d x %d)\n", (g.size ? g.size : 3), (g.size ? g.size : 3));
        printf("4. Rules\n");
        printf("5. Show Scoreboard\n");
        printf("6. Exit\n");
        printf("Enter choice: ");

        int choice;
        if (scanf("%d", &choice) != 1) { clear_stdin(); continue; }
        clear_stdin();

        if (choice == 6) {
            printf("Goodbye!\n");
            if (g.board) freeBoard(&g);
            break;
        }

        if (choice == 3) {
            printf("Choose board size:\n1. 3x3 (win 3)\n2. 5x5 (win 4)\nEnter: ");
            int s;
            if (scanf("%d", &s) != 1) { clear_stdin(); s = 1; }
            clear_stdin();
            if (g.board) { freeBoard(&g); g.board = NULL; }
            if (s == 2) {
                g.size = 5; g.win_len = 4;
            } else {
                g.size = 3; g.win_len = 3;
            }
            allocBoard(&g);
            initBoard(&g);
            printf("Board set to %dx%d (win %d)\n", g.size, g.size, g.win_len);
            continue;
        }

        if (choice == 4) {
            // ensure board defaults if not set
            if (!g.board) { g.size = 3; g.win_len = 3; allocBoard(&g); initBoard(&g); }
            showRules(&g);
            continue;
        }

        if (choice == 5) {
            if (!g.board) { g.size = 3; g.win_len = 3; allocBoard(&g); initBoard(&g); }
            printScores(&g);
            continue;
        }

        if (choice == 1 || choice == 2) {
            if (!g.board) { g.size = 3; g.win_len = 3; allocBoard(&g); initBoard(&g); }
            g.mode = (choice == 1) ? 1 : 2;

            // Play a single game
            playSingleGame(&g);

            // Ask for replay
            char ans;
            while (1) {
                printf("Play again? (y/n) or (m) menu: ");
                if (scanf(" %c", &ans) != 1) { clear_stdin(); continue; }
                clear_stdin();
                if (ans == 'y' || ans == 'Y') {
                    playSingleGame(&g);
                } else if (ans == 'm' || ans == 'M') {
                    break;
                } else break;
            }
            continue;
        }

        printf("Invalid choice. Try again.\n");
    }
}

/* ----------------------- main: only calls play() ----------------------- */

int main() {
    play();
    return 0;
}
