/*
 * Program: Fseek File Pointer 20
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void append(char *str, int *n, char *word)
{
    for(int i=0; word[i]!='\0'; i++)
        str[(*n)++]=word[i];
}
void replace(FILE *fp)
{
    char word[100], ch;
    int i=0, k=0;
    fseek(fp, 0, SEEK_END);  // Reposition the file pointer
    long m=ftell(fp);  // Obtain the current file-pointer position
    char *data=(char *)malloc(m+1);
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    while((ch=fgetc(fp))!=EOF)  // Read a character from the file
    {
        if(ch==' ' || ch=='\n' || ch=='\t')
        {
            word[k]='\0';
            data[i]='\0';
            if(strstr(data, word)==NULL)
                append(data, &i, word);
            data[i++]=ch;
            k=0;
        }
        else
            word[k++]=ch;
    }
    data[i+1]='\0';
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    ftruncate(fileno(fp), 0);
    fprintf(fp, "%s", data);  // Write formatted data to the file
    fclose(fp);  // Close the file
    free(data);
}
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "r+");  // Open the file with the specified mode
    replace(fp);
    return 0;  // Indicate successful program termination
}
