#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MAX 64
#define MAX_MEAN 250
#define MAX_WORDS 2000
#define MAX_WRONG 6

typedef struct WordInfo
{
    char word[MAX];
    char meaning[MAX_MEAN];
}words;

void toLowerCase(char *s)
{
    for (int i = 0; s[i]; i++)
        s[i] = tolower(s[i]);
}

void printHangman(int wrong)
{
    const char *stages[] = {
        "  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========\n",
        "  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n=========\n"
    };

    printf("%s\n", stages[wrong]);
}

void displayWord(char visible[], int len)
{
    printf("\nWord: ");
    for (int i = 0; i < len; i++)
        printf("%c ", visible[i]);
    printf("\n");
}

int processLetter(char guess, char secret[], char visible[], int used[], int len)
{
    int index = guess - 'a';
    if (used[index]) {
        printf("Already used '%c'. Try another.\n", guess);
        return -1; 
    }
    used[index] = 1;
    int found = 0;
    for (int i = 0; i < len; i++)
    {
        if (secret[i] == guess)
        {
            visible[i] = guess;
            found = 1;
        }
    }
    return found ? 1 : 0;   
}

int isSolved(char visible[], int len)
{
    for (int i = 0; i < len; i++)
        if (visible[i] == '_')
            return 0;

    return 1;
}

int loadWords(words list[], const char *filename)
{
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("Cannot open file.\n");
        return 0;
    }

    int count = 0;
    char line[300];

    while (fgets(line, sizeof(line), fp))
    {
        line[strcspn(line, "\n")] = 0;
        char *p = strchr(line, '-');
        if (!p)
            continue;
        *p = 0;
        strcpy(list[count].word, line);
        strcpy(list[count].meaning, p + 1);
        toLowerCase(list[count].word);
        count++;
        if (count >= MAX_WORDS) break;
    }
    printf("A total of %d words are loaded.\n", count);
    fclose(fp);
    return count;
}

int getIndex(int total)
{
    int index=0;
    srand(clock()^(unsigned long)(&index));
    index=rand();
    for(int i=0; i<index%97; i++)
    {
        srand(clock()^index);
        index=rand();
    }
    return index%total;
}

void play(words list[], int total)
{
    int index = getIndex(total);
    int len = strlen(list[index].word);
    char visible[MAX];
    int used[26]= {0};
    int wrong=0;
    static int score=0;

    for (int i = 0; i < len; i++)
        visible[i] = '_';
    visible[len] = 0;

    while (wrong < MAX_WRONG)
    {
        system("clear");
        displayWord(visible, len);
        printHangman(wrong);
        printf("\n==================================================");
        printf("\nHINTS: %s\n", list[index].meaning);
        printf("====================================================\n");
        printf("Wrong tries left: %d\n", MAX_WRONG - wrong);

        printf("Enter a letter or full word: ");
        char input[100];
        scanf("%s",input);
        toLowerCase(input);

        if (strlen(input) == 1)     
        {
            int result = processLetter(input[0], list[index].word, visible, used, len);

            if (result == 0) 
                wrong++;       
            if (result == 1 && isSolved(visible, len)) 
            {
                printf("\n********************************************************");
                printf("\n✔ Correct! Word: %s- %s\n", list[index].word, list[index].meaning);
                if((strlen(list[index].word)-wrong)>0)
                    score=score+(strlen(list[index].word)-wrong)*10;
                printf("Your current score is: %d\n",score);
                printf("*********************************************************\n");
                return;
            }
        }
        else                     
        {
            if (strcmp(input, list[index].word) == 0) 
            {
                printf("\n********************************************************");
                printf("\n✔ Correct! Word: %s- %s\n", list[index].word, list[index].meaning);
                if((strlen(list[index].word)-wrong)>0)
                    score=score+(strlen(list[index].word)-wrong)*10;
                printf("Your current score is: %d\n",score);
                printf("*********************************************************\n");
                return;
            }
            else 
            {
                printf("Incorrect.\n");
                wrong++;
            }
        }
    }

    printHangman(MAX_WRONG);
    printf("\n💀 Game Over. Word was: %s- %s\n", list[index].word, list[index].meaning);
}

int main()
{
    words list[MAX_WORDS];
    int total,hardness;
    printf("1. Easy words\n2. Medium words\n3. Complex Words\n");
    printf("Enter your choice: ");
    scanf("%d",&hardness);
    if(hardness==1)
        total=loadWords(list, "easy_words.txt");
    else if(hardness==2)   
        total=loadWords(list, "medium_words.txt");
    else
        total=loadWords(list, "hard_words.txt");
    char ch[100];
    if (total == 0) {
        printf("No words loaded.\n");
        return 0;
    }
    do{
        play(list, total);
        printf("\nWould you like to play again (y/n)?");
        scanf("%s",&ch);
        toLowerCase(ch);
    }while(strcmp(ch,"y")==0 || strcmp(ch,"yes")==0);
    return 0;
}
