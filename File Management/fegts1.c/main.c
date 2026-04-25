#include <stdio.h>
int main()
{
    FILE *fp=fopen("myfile.txt", "r");
    char buff[101];
    int n;
    while (fgets(buff,100,fp)){
        printf("%s", buff);
    }
    fclose(fp);
    return 0;
}