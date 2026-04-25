#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void append(char *str, int *n, char *word)
{
    for(int i=0; word[i]!='\0'; i++)
        str[(*n)++]=word[i];
}
void replace(FILE *fp)
{
    char word[100], ch;
    int i=0, k=0;
    fseek(fp, 0, SEEK_END);
    long m=ftell(fp);
    char *data=(char *)malloc(m+1);
    fseek(fp, 0, SEEK_SET);
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch==' ' || ch=='\n' || ch=='\t')
        {
            word[k]='\0';
            data[i]='\0';
            if(strstr(data, word)==NULL)
                append(data, &i, word);
            data[i++]=ch;
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
    replace(fp);
    return 0;
}