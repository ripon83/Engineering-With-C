/*
 * Program: Read Character From File 8
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp1=fopen("input.txt", "r");  // Open the file with the specified mode
    FILE *fp2=fopen("output.txt", "w");  // Open the file with the specified mode
    char ch;
    while((ch=fgetc(fp2))!=EOF)  // Read a character from the file
        fputc(ch, fp1);  // Write a character to the file
    fclose(fp1);  // Close the file
    fclose(fp2);  // Close the file
    return 0;  // Indicate successful program termination
}
