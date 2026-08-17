/*
 * Program: Read Line From File 9
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
void split(FILE *fp, int n)
{
    char line[256], filename[10];
    int i=1, count=0;
    sprintf(filename, "File %d.txt", i);
    FILE *out=fopen(filename, "w");  // Open the file with the specified mode
    while(fgets(line, sizeof(line), fp)!=NULL)  // Read a line/string from the file
    {
        if(count==n)
        {
            fclose(out);  // Close the file
            i++;
            sprintf(filename, "File %d.txt", i);
            out=fopen(filename, "w");  // Open the file with the specified mode
            count=-1;
        }
        fputs(line, out);  // Write a string to the file
        count++;
        
    }
    fclose(fp);  // Close the file
    fclose(out);  // Close the file
}
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "r");  // Open the file with the specified mode
    int n=5;
    split(fp, n);
    return 0;  // Indicate successful program termination
}
