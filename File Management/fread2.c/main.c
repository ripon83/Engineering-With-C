#include <stdio.h>
int main()
{
    FILE *fp=fopen("myfile.txt", "r");
    char buff[100];
    int i=0;
    while (fread(buff, 1, 1, fp) > 0){
        printf("%d: %s\n",++i,buff);
    }
    fclose(fp);
    return 0;
}