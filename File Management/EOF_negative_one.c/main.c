#include <stdio.h>
int main()
{
    FILE *fp=fopen("myfile.txt","w+");
    char ch;
    putw(-1,fp);
    fprintf(fp,"Learn to respect time. Otherwise, time will not respect you.");
    rewind(fp);
    while((ch=fgetc(fp))!=EOF)
        printf("%c",ch);
    fclose(fp);
    return 0;
}