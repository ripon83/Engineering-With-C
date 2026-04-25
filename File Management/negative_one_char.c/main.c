#include <stdio.h>
int main()
{
    FILE *fp=fopen("myfile.txt","w+");
    char ch;
    fprintf(fp,"Learn to respect time. -1 Otherwise, time will not respect you.");
    rewind(fp);
    while((ch=fgetc(fp))!=EOF)
        printf("%c",ch);
    fclose(fp);
    return 0;
}