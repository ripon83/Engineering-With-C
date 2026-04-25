#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void append(char *str, int *n, char *line)
{
    for(int i=0; line[i]!='\0'; i++)
        str[(*n)++]=line[i];
    str[(*n)++]='\n';
}
void deduplicate(FILE *fp)
{
    char line[128];
    int i=0, c=0;
    fseek(fp, 0, SEEK_END);
    long m=ftell(fp);
    char *data=(char *)malloc(m+1);
    fseek(fp, 0, SEEK_SET);
    while(fgets(line, sizeof(line), fp)!=NULL)
    {
        data[i]='\0';
        line[strcspn(line, "\n")]=0;
        if(strstr(data, line)==NULL)
            append(data, &i, line);
    }
    data[i]='\0';
    fseek(fp, 0, SEEK_SET);
    ftruncate(fileno(fp), 0);
    fprintf(fp, "%s", data);
    fclose(fp);
    free(data);
}
int main()
{
    FILE *fp=fopen("input.txt", "r+");
    deduplicate(fp);
    return 0;
}