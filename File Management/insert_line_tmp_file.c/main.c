#include <stdio.h>
void insert(char *filename, int n, char *str)
{
    FILE *fp=fopen(filename, "r+");
    FILE *tmp=fopen("tmp.txt", "w");
    char line[256];
    int count=1;
    while(fgets(line, sizeof(line), fp)!=NULL)
    {
        if(count==n)
        {
            fputs(str, tmp);
            fputs("\n", tmp);
            fputs(line, tmp);
            count++;
        }
        else
        {
            fputs(line, tmp);
            count++;
        }
    }
    remove(filename);
    rename("tmp.txt", filename);
    fclose(fp);
}
int main()
{
    int n=4;
    char filename[]="input.txt";
    char str[]="Love is extremely powerful tool, utilize it.";
    insert(filename, n, str);
    return 0;
}