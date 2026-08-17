/*
 * Program: Fseek File Pointer 36
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "a");  // Open the file with the specified mode
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    fprintf(fp, "Log entry recorded.\n");  // Write formatted data to the file
    char ch;
    while((ch=fgetc(fp))!=EOF)  // Read a character from the file
        printf("%c", ch);  // Display output
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
