#include <stdio.h>
int main()
{
    FILE *fp=fopen("myfile.txt","w");
    printf("File pointer at the starting is %ld\n",ftell(fp));
    fprintf(fp,"Learn to respect time. Otherwise, time will not respect you.");
    printf("File pointer at the ending is %ld\n",ftell(fp));
    fclose(fp);
    return 0;
}