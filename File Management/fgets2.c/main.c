#include <stdio.h>
int main()
{
    FILE *fp=fopen("myfile.txt", "r");
    char buff[101];
    char *ptr=NULL;
    int n;
    while (!feof(fp)){
        ptr=fgets(buff,100,fp);
        printf("%s",ptr);
    }
    fclose(fp);
    return 0;
}