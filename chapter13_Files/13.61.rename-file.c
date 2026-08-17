/*
 * Program: Rename File
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
void delete(char *filename, int n)
{
    FILE *fp=fopen(filename, "r+");  // Open the file with the specified mode
    FILE *tmp=fopen("tmp.txt", "w");  // Open the file with the specified mode
    char line[256];
    int count=1;
    while(fgets(line, sizeof(line), fp)!=NULL)  // Read a line/string from the file
    {
        if(count!=n)
        {
            fputs(line, tmp);  // Write a string to the file
            count++;
        }
        else
            count++;
    }
    remove(filename);
    rename("tmp.txt", filename);
    fclose(fp);  // Close the file
}
int main()  // Main function: program execution starts here
{
    int n=4;
    char filename[]="input.txt";
    delete(filename, n);
    return 0;  // Indicate successful program termination
}
