#include <stdio.h>
int main()
{
    FILE *fp=fopen("myfile.txt","a");
    if(fp==NULL)
        printf("Error! Unable to open the file.\n");
    else
        printf("A file is created in \"a\" mode if the file does not exist.\n");
    return 0;
}