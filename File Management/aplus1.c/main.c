#include <stdio.h>
int main()
{
    FILE *fp=fopen("myfile.txt","a+");
    char buff[1024];
    fseek(fp,0,SEEK_SET);
    while(fread(buff,1,1024,fp)>0)
        printf("%s",buff);
    fclose(fp);
    return 0;
}