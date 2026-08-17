/*
 * Program: Fseek File Pointer 12
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()   // Main function: program execution starts here
{
    FILE *fp = fopen("input.txt", "r");  // Open the file with the specified mode
    fseek(fp, 0, SEEK_END);  // Reposition the file pointer
    long size = ftell(fp);  // Obtain the current file-pointer position
    char ch;
    for(long i=1; i<=size; i++)
    {
        fseek(fp, -i, SEEK_END);  // Reposition the file pointer
        ch = fgetc(fp);  // Read a character from the file
        printf("%c", ch);  // Display output
    }
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
