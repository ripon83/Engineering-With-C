#include <stdio.h>
int main()
{
    FILE *fp=fopen("myfile.txt","a");
    fprintf(fp,"Do not believe on your luck.\n");
    fprintf(fp,"Believe on your work.\nLuck will always favor you.\n");
    return 0;
}