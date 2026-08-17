/*
 * Program: Fseek File Pointer 19
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void append(char *str, int *n, char *line)
{
    for(int i=0; line[i]!='\0'; i++)
        str[(*n)++]=line[i];
    str[(*n)++]='\n';
}
void deduplicate(FILE *fp)
{
    char line[128];
    int i=0;
    fseek(fp, 0, SEEK_END);  // Reposition the file pointer
    long m=ftell(fp);  // Obtain the current file-pointer position
    char *data=(char *)malloc(m+1);
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    while(fgets(line, sizeof(line), fp)!=NULL)  // Read a line/string from the file
    {
        data[i]='\0';
        line[strcspn(line, "\n")]=0;
        if(strstr(data, line)==NULL)
            append(data, &i, line);
    }
    data[i]='\0';
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    ftruncate(fileno(fp), 0);
    fprintf(fp, "%s", data);  // Write formatted data to the file
    fclose(fp);  // Close the file
    free(data);
}
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "r+");  // Open the file with the specified mode
    deduplicate(fp);
    return 0;  // Indicate successful program termination
}
