/*
 * Program 12.112: English Word Dictionary - Complete Program
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure used by the program.
typedef struct Word
{
    char word[100];
    char meaning[250];
}words;

// Define a structure used by the program.
typedef struct Word_Meaning
{
    words *w;
    int size;
    int capacity;
}dictionary;

dictionary *create(int n)
{
    dictionary *d=(dictionary *)malloc(sizeof(dictionary));
    d->w=(words *)malloc(sizeof(words)*n);
    d->size=-1;
    d->capacity=n;
    return d;
}

void addWord(dictionary *d, char word[], char meaning[])
{
    if(d->size < d->capacity-1)
    {
        d->size++;
        strcpy(d->w[d->size].word, word);
        strcpy(d->w[d->size].meaning, meaning);
    }
    else
        printf("Full\n");
}

void search(dictionary *d, char *key)
{
    for(int i=0; i<=d->size; i++)
    {
        if(strcmp(d->w[i].word, key)==0)
        {
            printf("%s => %s\n",
                   d->w[i].word,
                   d->w[i].meaning);
            return;
        }
    }

    printf("Word not found.\n");
}

void showDictionary(dictionary *d)
{
    for(int i=0; i<=d->size; i++)
    {
        printf("%s => %s\n",
               d->w[i].word,
               d->w[i].meaning);
    }
}

void input(dictionary *d)
{
    char word[100], meaning[250];

    printf("Enter the word: ");
    scanf("%99s", word);

    printf("Enter the meaning: ");
    scanf(" %249[^\n]", meaning);

    addWord(d, word, meaning);
}

void search_key(dictionary *d)
{
    char key[100];

    printf("Enter the word: ");
    scanf("%99s", key);

    search(d, key);
}

void run(dictionary *d)
{
    int ch;

    while(1)
    {
        printf("\n1. Insert\n");
        printf("2. Search\n");
        printf("3. Show dictionary\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        if(ch==1)
            input(d);
        else if(ch==2)
            search_key(d);
        else if(ch==3)
            showDictionary(d);
        else
            break;
    }
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    dictionary *d=create(10);
    run(d);
    return 0;
}
