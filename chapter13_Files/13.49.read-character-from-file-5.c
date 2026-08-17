/*
 * Program: Read Character From File 5
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()   // Main function: program execution starts here
{
    char ch;
    FILE *fp=fopen("input.txt", "r");  // Open the file with the specified mode
    FILE *fw=fopen("output.txt", "w");  // Open the file with the specified mode
    while((ch = fgetc(fp)) != EOF)   // Read a character from the file
    {
        fprintf(fw,"%c",ch);  // Write formatted data to the file
    }
    fclose(fp);  // Close the file
    fclose(fw);  // Close the file
    return 0;  // Indicate successful program termination
}
