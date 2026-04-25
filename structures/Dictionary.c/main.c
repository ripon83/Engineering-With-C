#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Word
{
    char word[100];
    char meaning[250];
}words;

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

void showDictionary(dictionary *d)
{
    for(int i=0; i <= d->size; i++)
    {
        printf("%s => %s\n",d->w[i].word, d->w[i].meaning);
    }
}

void search(dictionary *d, char *str)
{
    for(int i=0; i <= d->size; i++)
    {
        if(strcmp(d->w[i].word, str)==0)
        {
            printf("%s => %s\n",d->w[i].word, d->w[i].meaning);
            break;
        }
    }
}

void input(dictionary *d)
{
    char word[100], meaning[250];
    printf("Enter the word: ");
    scanf("%s",word);
    printf("Enter the meaning: ");
    scanf(" %[^\n]",meaning);
    addWord(d, word, meaning);
}

void search_key(dictionary *d)
{
    char key[100];
    printf("Enter the word:");
    scanf("%s",key);
    search(d, key);
}

void run(dictionary *d)
{
    int ch;
    while(1)
    {
        printf("\n1. Insert\n2. Search\n3. Show dictionary\n4. Exit\n");
        printf("Enter your choice:");
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

int main()
{
    dictionary *d=create(10);
    run(d);
    return 0;
}