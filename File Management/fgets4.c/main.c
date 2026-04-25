#include <stdio.h>
int main()
{
    FILE *fp=fopen("myfile.txt", "r");
    char buff[1024];
    int i=0;
    while (!feof(fp)){
        fgets(buff,1024,fp);
        printf("Iteration %d: %s",++i,buff);
    }
    fclose(fp);
    return 0;
}