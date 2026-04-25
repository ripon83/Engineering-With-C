#include <stdio.h>
int main()
{
    char filename[1024];
    printf("Enter the filename:");
    scanf("%s",filename);
    FILE *fp=fopen(filename,"w");
    fclose(fp);
    return 0;
}