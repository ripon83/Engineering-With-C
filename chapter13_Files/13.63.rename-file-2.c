/*
 * Program: Rename File 2
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
void insert(char *filename, int n, char *str)
{
    FILE *fp=fopen(filename, "r+");  // Open the file with the specified mode
    FILE *tmp=fopen("tmp.txt", "w");  // Open the file with the specified mode
    char line[256];
    int count=1;
    while(fgets(line, sizeof(line), fp)!=NULL)  // Read a line/string from the file
    {
        if(count==n)
        {
            fputs(str, tmp);  // Write a string to the file
            fputs("\n", tmp);  // Write a string to the file
            fputs(line, tmp);  // Write a string to the file
            count++;
        }
        else
        {
            fputs(line, tmp);  // Write a string to the file
            count++;
        }
    }
    remove(filename);
    rename("tmp.txt", filename);
    fclose(fp);  // Close the file
}
int main()  // Main function: program execution starts here
{
    int n=4;
    char filename[]="input.txt";
    char str[]="Love is extremely powerful tool, utilize it.";
    insert(filename, n, str);
    return 0;  // Indicate successful program termination
}
