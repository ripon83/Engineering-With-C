#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void append(char *str, int *n, char *word, char ch)
{
    for(int i=0; word[i]!='\0'; i++)
        str[(*n)++]=word[i];
    str[(*n)++]=ch;
}
void replace(FILE *fp, char *old_word, char *new_word)
{
    char word[100], ch;
    int i=0, k=0;
    fseek(fp, 0, SEEK_END);
    long m=ftell(fp);
    char *data=(char *)malloc(m+strlen(new_word)+10);
    fseek(fp, 0, SEEK_SET);
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch==' ' || ch=='\n' || ch=='\t')
        {
            word[k]='\0';
            if(strcmp(word, old_word)==0)
                append(data, &i, new_word, ch);
            else
                append(data, &i, word, ch);
            k=0;
        }
        else
            word[k++]=ch;
    }
    data[i+1]='\0';
    fseek(fp, 0, SEEK_SET);
    ftruncate(fileno(fp), 0);
    fprintf(fp, "%s", data);
    fclose(fp);
}
int main()
{
    FILE *fp=fopen("input.txt", "r+");
    char old_word[100], new_word[100];
    printf("Enter the word to be replaced:");
    scanf("%s", old_word);
    printf("Enter the new word:");
    scanf("%s", new_word);
    replace(fp, old_word, new_word);
    return 0;
}