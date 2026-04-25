#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void clearInput()
{
    while (getchar() != '\n');
}

void saveScore(double wpm, double accuracy)
{
    FILE *fp = fopen("score_history.txt", "a");
    if (fp != NULL)
    {
        fprintf(fp, "WPM: %.2f | Accuracy: %.2f%%\n", wpm, accuracy);
        fclose(fp);
    }
}

void showHistory()
{
    char ch;
    FILE *fp = fopen("score_history.txt", "r");

    if (fp == NULL)
    {
        printf("\nNo history available.\n");
        return;
    }

    printf("\n--- Score History ---\n");
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
}

char* getSentence(int level)
{
    static char *easy[] = {
        "C is fun",
        "I love coding",
        "Practice daily"
    };

    static char *medium[] = {
        "C programming improves logic",
        "Typing speed matters in exams",
        "Consistency brings success"
    };

    static char *hard[] = {
        "C programming builds strong problem solving skills",
        "Typing fast and accurately requires regular practice",
        "Discipline and focus lead to long term success"
    };

    if (level == 1)
        return easy[rand() % 3];
    else if (level == 2)
        return medium[rand() % 3];
    else
        return hard[rand() % 3];
}

double calculateWPM(int characters, double seconds)
{
    double words = characters / 5.0;
    return (words / seconds) * 60;
}

double calculateAccuracy(char original[], char typed[])
{
    int correct = 0;
    int i, len = strlen(original);

    for (i = 0; i < len && typed[i] != '\0'; i++)
    {
        if (original[i] == typed[i])
            correct++;
    }

    return ((double)correct / len) * 100;
}

void playGame()
{
    char input[300];
    int level;
    time_t start, end;
    double timeTaken, wpm, accuracy;
    char *sentence;

    printf("\nSelect Difficulty Level\n");
    printf("1. Easy\n2. Medium\n3. Hard\n");
    printf("Enter choice: ");
    scanf("%d", &level);
    clearInput();

    sentence = getSentence(level);

    printf("\nType the following sentence:\n\n");
    printf("%s\n\n", sentence);

    time(&start);
    fgets(input, sizeof(input), stdin);
    time(&end);

    input[strcspn(input, "\n")] = '\0';

    timeTaken = difftime(end, start);
    wpm = calculateWPM(strlen(input), timeTaken);
    accuracy = calculateAccuracy(sentence, input);

    printf("\nTime Taken : %.2f seconds\n", timeTaken);
    printf("Typing Speed: %.2f WPM\n", wpm);
    printf("Accuracy    : %.2f%%\n", accuracy);

    saveScore(wpm, accuracy);

    printf("\nView score history? (y/n): ");
    char ch;
    scanf(" %c", &ch);
    clearInput();

    if (ch == 'y' || ch == 'Y')
        showHistory();
}

int main()
{
    char choice;
    srand(time(NULL));

    do
    {
        playGame();
        printf("\nWould you like to play again? (y/n): ");
        scanf(" %c", &choice);
        clearInput();

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for playing!\n");
    return 0;
}
