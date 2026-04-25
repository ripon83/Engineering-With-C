#include <stdio.h>
int main()
{
    FILE *fp=fopen(__FILE__,"a+");
    char buff[1024];
    fprintf(fp,"//Comments are added to understand the program\n");
    fseek(fp,0,SEEK_SET);
    while(!feof(fp))
    {
        fgets(buff,1024,fp);
        printf("%s",buff);
        buff[0]='\0';
    }
    return 0;
}

//Comments are added to understand the program
