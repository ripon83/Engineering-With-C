#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void swap(FILE *fp1, FILE *fp2)
{
    fseek(fp1, 0, SEEK_END);
    fseek(fp2, 0, SEEK_END);
    
    int m=ftell(fp1);
    int n=ftell(fp2);
    
    fseek(fp1, 0, SEEK_SET);
    fseek(fp2, 0, SEEK_SET);
    
    char *data1=(char *)malloc(m+1);
    char *data2=(char *)malloc(n+1);
    
    fread(data1, 1, m, fp1);
    fread(data2, 1, n, fp2);
    
    fseek(fp1, 0, SEEK_SET);
    fseek(fp2, 0, SEEK_SET);
    
    ftruncate(fileno(fp1), 0);
    ftruncate(fileno(fp2), 0);
    
    fwrite(data2, 1, n, fp1);
    fwrite(data1, 1, m, fp2);
    
    fclose(fp1);
    fclose(fp2);
    free(data1);
    free(data2);
}
int main()
{
    FILE *fp1=fopen("file1.txt", "r+");
    FILE *fp2=fopen("file2.txt", "r+");
    swap(fp1, fp2);
    return 0;
}