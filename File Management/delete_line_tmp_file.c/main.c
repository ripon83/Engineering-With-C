#include <stdio.h>
void delete(char *filename, int n)
{
    FILE *fp=fopen(filename, "r+");
    FILE *tmp=fopen("tmp.txt", "w");
    char line[256];
    int count=1;
    while(fgets(line, sizeof(line), fp)!=NULL)
    {
        if(count!=n)
        {
            fputs(line, tmp);
            count++;
        }
        else
            count++;
    }
    remove(filename);
    rename("tmp.txt", filename);
    fclose(fp);
}
int main()
{
    int n=4;
    char filename[]="input.txt";
    delete(filename, n);
    return 0;
}