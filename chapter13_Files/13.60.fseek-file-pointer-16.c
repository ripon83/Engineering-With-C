/*
 * Program: Fseek File Pointer 16
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void delete(FILE *fp, int n)
{
    char ch;
    int cline=1, i=0;
    fseek(fp, 0, SEEK_END);  // Reposition the file pointer
    long m=ftell(fp);  // Obtain the current file-pointer position
    char *data=(char *)malloc(m+1);
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    while((ch=fgetc(fp)) != EOF)  // Read a character from the file
    {
        if(cline!=n)
        {
            if(ch=='\n')
                cline++;
            data[i++]=ch;
        }
        else
            if(ch=='\n')
                cline++;
    }
    data[i]='\0';
    printf("%s", data);  // Display output
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    ftruncate(fileno(fp), 0);
    fprintf(fp, "%s", data);  // Write formatted data to the file
    fclose(fp);  // Close the file
    free(data);
}
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "r+");  // Open the file with the specified mode
    int n;
    printf("Enter line number:");  // Display output
    scanf("%d", &n);  // Read input from the user
    delete(fp, n);
    return 0;  // Indicate successful program termination
}
