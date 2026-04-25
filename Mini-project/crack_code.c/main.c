#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CODE_LEN 4
#define MAX_ATTEMPTS 10
#define MAX_TRIES 50
#define RESULT_FILE "results.txt"

int getRand()
{
    int r=0;
    srand(clock()^(unsigned long)(&r));
    r=rand();
    for(int i=0; i<r%97; i++)
    {
        srand(clock()^r);
        r=rand();
    }
    return r;
}

void generateCode(int code[]) 
{
    for (int i = 0; i < CODE_LEN; i++)
        code[i] = getRand() % 10;
}

void getGuess(int guess[]) 
{
    for (int i = 0; i < CODE_LEN; i++)
        scanf("%d", &guess[i]);
}

int isAlreadyTried(int prev[][CODE_LEN], int count, int guess[]) 
{
    for (int i = 0; i < count; i++) 
    {
        int same = 1;
        for (int j = 0; j < CODE_LEN; j++) 
        {
            if (prev[i][j] != guess[j]) 
            {
                same = 0;
                break;
            }
        }
        if (same) return 1;
    }
    return 0;
}

void saveGuess(int prev[][CODE_LEN], int index, int guess[]) 
{
    for (int i = 0; i < CODE_LEN; i++)
        prev[index][i] = guess[i];
}

void checkGuess(int code[], int guess[], int *cp, int *cn) 
{
    int usedCode[CODE_LEN] = {0};
    int usedGuess[CODE_LEN] = {0};
    *cp = *cn = 0;

    for (int i = 0; i < CODE_LEN; i++) 
    {
        if (code[i] == guess[i]) 
        {
            (*cp)++;
            usedCode[i] = usedGuess[i] = 1;
        }
    }

    for (int i = 0; i < CODE_LEN; i++) 
    {
        if (usedGuess[i]) 
            continue;
        for (int j = 0; j < CODE_LEN; j++) 
        {
            if (!usedCode[j] && guess[i] == code[j]) 
            {
                (*cn)++;
                usedCode[j] = 1;
                break;
            }
        }
    }
}


void printHeader() 
{
    printf("\n====================================\n");
    printf("        🎯 MASTERMIND GAME 🎯        \n");
    printf("====================================\n");
    printf("Guess the 4-digit secret (0–9)\n");
    printf("Example: 1 2 3 4\n");
}

void giveHint(int code[]) 
{
    int pos = getRand() % CODE_LEN;
    printf("\n💡 HINT → Position %d = %d\n", pos + 1, code[pos]);
}

int calculateScore(int attemptsLeft, int timeTaken) 
{
    int base = attemptsLeft * 40;
    int bonus = (timeTaken < 60) ? (60 - timeTaken) * 2 : 0;
    return base + bonus;
}

void saveResult(char *result, int attempts, int timeTaken, int score) {
    FILE *fp = fopen(RESULT_FILE, "a+");
    if (!fp) return;

    fseek(fp, 0, SEEK_END);

    /* Write header if file is empty */
    if (ftell(fp) == 0) {
        fprintf(fp, "Date       | Time  | Result | Attempts | Time(s) | Score\n");
        fprintf(fp, "---------------------------------------------------------\n");
    }

    time_t now = time(NULL);
    struct tm *t = localtime(&now);

    fprintf(fp, "%04d-%02d-%02d | %02d:%02d | %-4s | %2d       | %3d     | %4d\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday,
            t->tm_hour, t->tm_min, result, attempts, timeTaken, score);

    fclose(fp);
}


void showHistory() 
{
    FILE *fp = fopen(RESULT_FILE, "r");
    if (!fp) 
    {
        printf("\n📂 No history found.\n");
        return;
    }

    char line[200];
    printf("\n📜 GAME HISTORY\n");
    printf("------------------------------------\n");
    while (fgets(line, sizeof(line), fp))
        printf("%s", line);

    fclose(fp);
}

void handleWin(int attempt, time_t startTime) 
{
    time_t endTime;
    time(&endTime);
    int timeTaken = (int)difftime(endTime, startTime);
    int score = calculateScore(MAX_ATTEMPTS - attempt + 1, timeTaken);
    printf("\n🎉 CONGRATULATIONS! YOU WON 🎉\n");
    printf("⏱ Time Taken : %d seconds\n", timeTaken);
    printf("🏆 Score      : %d\n", score);
    saveResult("WIN", attempt, timeTaken, score);
}

void handleLoss(int code[], time_t startTime) 
{
    time_t endTime;
    time(&endTime);
    int timeTaken = (int)difftime(endTime, startTime);
    printf("\n❌ GAME OVER ❌\n");
    printf("🔐 Code was : ");
    for (int i = 0; i < CODE_LEN; i++)
        printf("%d", code[i]);
    printf("\n");
    saveResult("LOSS", MAX_ATTEMPTS, timeTaken, 0);
}


void playGame() 
{
    int code[CODE_LEN], guess[CODE_LEN];
    int prev[MAX_TRIES][CODE_LEN];
    int guessCount = 0, hintUsed = 0;
    int cp, cn;
    time_t startTime;

    generateCode(code);
    time(&startTime);
    printHeader();

    for (int attempt = 1; attempt <= MAX_ATTEMPTS; ) 
    {
        printf("\nAttempt %d/%d → ", attempt, MAX_ATTEMPTS);
        getGuess(guess);

        if (isAlreadyTried(prev, guessCount, guess)) 
        {
            printf("⚠️ Already tried! Not counted.\n");
            continue;
        }

        saveGuess(prev, guessCount++, guess);
        checkGuess(code, guess, &cp, &cn);

        if (cp == CODE_LEN) {
            handleWin(attempt, startTime);
            return;
        }

        printf("✔ Correct Position : %d\n", cp);
        printf("✔ Correct Digit    : %d\n", cn);

        if (!hintUsed) 
        {
            char ch;
            printf("Need hint? (y/n): ");
            scanf(" %c", &ch);
            if (ch == 'y' || ch == 'Y') 
            {
                giveHint(code);
                hintUsed = 1;
            }
        }
        attempt++;
    }
    handleLoss(code, startTime);
}


int main() 
{
    char choice;
    srand(time(NULL));

    do 
    {
        system("clear");
        playGame();
        printf("\nView game history? (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'y' || choice == 'Y')
            showHistory();

        printf("\nPlay again? (y/n): ");
        scanf(" %c", &choice);

    }while (choice == 'y' || choice == 'Y');

    printf("\n👋 Thanks for playing!\n");
    return 0;
}
