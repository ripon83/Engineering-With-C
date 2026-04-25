/*****************************************************
Dictionary program: Dictionary is loaded from file.
******************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct 
{
    char word[101];
    char pos[51];
    char meaning[251];
    char example[251];
}words;

typedef struct 
{
    words *w;
    int size;
    int capacity;
}dictionary;

int counter(FILE *fp)
{
    int count=0;
    char str[450];
    while(fgets(str, sizeof(str), fp)!=NULL)
        count++;
    return count;
}

void format(char *word)
{
    if(word[0]>=97 && word[0]<=122)
        word[0]-=32;
    for(int i=1; word[i]!='\0'; i++)
    {
        if(word[i]>=65 && word[i]<=90)
            word[i]+=32;
    }
}

dictionary *create(int n)
{
    dictionary *d=(dictionary *)malloc(sizeof(dictionary));
    d->w=(words *)malloc(sizeof(words)*n);
    d->size=-1;
    d->capacity=n;
}

void loadDictionary(FILE *fp, dictionary *d)
{
    int i=0;
    fseek(fp, 0, SEEK_SET);
    while(fscanf(fp, "%100[^,],%50[^,],%250[^,],%250[^\n]\n", d->w[i].word, d->w[i].pos, d->w[i].meaning, d->w[i].example)==4)
    {
        d->size++;
        i++;
    }
    printf("Total %d words and meanings are loaded successfully!\n",i);
}

void showDictionary(dictionary *d)
{
    for(int i=0; i<=d->size; i++)
    {
        printf("%s [%s] => %s. Example: %s\n", d->w[i].word, d->w[i].pos, d->w[i].meaning, d->w[i].example);
    }
}

void search(dictionary *d, char *str)
{
    for(int i=0; i<=d->size; i++)
    {
        if(strcmp(d->w[i].word, str)==0)
        {
            printf("%s [%s] => %s. Example: %s\n", d->w[i].word, d->w[i].pos, d->w[i].meaning, d->w[i].example);
            break;
        }
    }
}

void search_key(dictionary *d)
{
    char key[100];
    printf("Enter the word:");
    scanf("%s", key);
    format(key);
    search(d, key);
}

void run(FILE *fp, dictionary *d)
{
    int ch;
    loadDictionary(fp, d);
    while(1)
    {
        printf("\n1. Search\n2. Show dictionary\n3. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        if(ch==1)
            search_key(d);
        else if(ch==2)
            showDictionary(d);
        else
            break;
    }
}

int main()
{
    FILE *fp=fopen("dictionary.txt", "r");
    int n=counter(fp);
    dictionary *d=create(n+1);
    run(fp, d);
    return 0;
}
