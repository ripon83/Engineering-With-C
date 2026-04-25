#include <stdio.h>
void split(FILE *fp, int n)
{
    char line[256], filename[10];
    int i=1, count=0;
    sprintf(filename, "File %d.txt", i);
    FILE *out=fopen(filename, "w");
    while(fgets(line, sizeof(line), fp)!=NULL)
    {
        if(count==n)
        {
            fclose(out);
            i++;
            sprintf(filename, "File %d.txt", i);
            out=fopen(filename, "w");
            count=-1;
        }
        fputs(line, out);
        count++;
        
    }
    fclose(fp);
    fclose(out);
}
int main()
{
    FILE *fp=fopen("input.txt", "r");
    int n=5;
    split(fp, n);

    return 0;
}