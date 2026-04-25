#include <stdio.h>
int main()
{
    FILE *fp=fopen("myfile.txt","a");
    fseek(fp,0,SEEK_SET);
    fprintf(fp,"Why does it always add at the end of the file?\n");
    return 0;
}