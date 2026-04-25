#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void delete(FILE *fp, int n)
{
    char ch;
    int cline=1, i=0;
    fseek(fp, 0, SEEK_END);
    long m=ftell(fp);
    char *data=(char *)malloc(m+1);
    fseek(fp, 0, SEEK_SET);
    while((ch=fgetc(fp)) != EOF)
    {
        if(cline!=n)
        {
            if(ch=='\n')
                cline++;
            data[i++]=ch;
        }
        else
            if(ch=='\n')
                cline++;
    }
    data[i]='\0';
    printf("%s",data);
    fseek(fp, 0, SEEK_SET);
    ftruncate(fileno(fp),0);
    fprintf(fp, "%s", data);
    fclose(fp);
}
int main()
{
    FILE *fp=fopen("input.txt", "r+");
    int n;
    printf("Enter line number:");
    scanf("%d", &n);
    delete(fp, n);
    return 0;
}