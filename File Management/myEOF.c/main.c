#include <stdio.h>
#define myEOF -1
int main()
{
    FILE *fp=fopen("myfile.txt", "r");
    char ch;
    while ((ch=fgetc(fp))!=myEOF){
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}