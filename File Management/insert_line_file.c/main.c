#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void insert(FILE *fp, int n, char *str)
{
    char ch;
    int cline=1, i=0, flag=0;
    fseek(fp, 0, SEEK_END);
    long m=ftell(fp);
    char *data=(char *)malloc(m+strlen(str)+2);
    fseek(fp, 0, SEEK_SET);
    while((ch=fgetc(fp)) != EOF)
    {
        if(cline==n)
        {
            for(int j=0; str[j]!='\0'; j++)
                data[i++]=str[j];
            data[i++]='\n';
            flag=1;
            cline++;
        }
        if(ch=='\n')
            cline++;
        data[i++]=ch;
    }
    if(flag==0)
    {
        data[i++]='\n';
        for(int j=0; str[j]!='\0'; j++)
            data[i++]=str[j];
    }
    data[i]='\0';
    printf("%s",data);
    fseek(fp, 0, SEEK_SET);
    fprintf(fp, "%s", data);
    fclose(fp);
}
int main()
{
    FILE *fp=fopen("input.txt", "r+");
    int n;
    char str[]="Love is extremely powerful tool, utilize it.";
    printf("Enter line number:");
    scanf("%d", &n);
    insert(fp, n, str);
    return 0;
}