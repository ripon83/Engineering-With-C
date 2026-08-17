/*
 * Program: Read Character From File
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "r");  // Open the file with the specified mode
    char buff[10], ch;
    int i=0;
    while((ch=fgetc(fp))!=EOF)  // Read a character from the file
        printf("%c", ch);  // Display output
    return 0;  // Indicate successful program termination
}
