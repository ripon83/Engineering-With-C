/*
 * Program: Read Character From File 7
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("newfile.txt", "r");  // Open the file with the specified mode
    char ch;
    while((ch=fgetc(fp))!=EOF)  // Read a character from the file
        printf("%c", ch);  // Display output
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
