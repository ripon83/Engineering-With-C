/*
 * Program: Fseek File Pointer 17
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void insert(FILE *fp, int n, char *str)
{
    char ch;
    int cline=1, i=0, flag=0;
    fseek(fp, 0, SEEK_END);  // Reposition the file pointer
    long m=ftell(fp);  // Obtain the current file-pointer position
    char *data=(char *)malloc(m+strlen(str)+2);
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    while((ch=fgetc(fp)) != EOF)  // Read a character from the file
    {
        if(cline==n)
        {
            for(int j=0; str[j]!='\0'; j++)
                data[i++]=str[j];
            data[i++]='\n';
            flag=1;
            cline++;
        }
        if(ch=='\n')
            cline++;
        data[i++]=ch;
    }
    if(flag==0)
    {
        data[i++]='\n';
        for(int j=0; str[j]!='\0'; j++)
            data[i++]=str[j];
    }
    data[i]='\0';
    printf("%s", data);  // Display output
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    fprintf(fp, "%s", data);  // Write formatted data to the file
    fclose(fp);  // Close the file
    free(data);
}
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "r+");  // Open the file with the specified mode
    int n;
    char str[]="Love is extremely powerful tool, utilize it.";
    printf("Enter line number:");  // Display output
    scanf("%d", &n);  // Read input from the user
    insert(fp, n, str);
    return 0;  // Indicate successful program termination
}
