/*
 * Program: Fseek File Pointer 30
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "w+");  // Open the file with the specified mode
    fprintf(fp, "One step at a time wins the race.");  // Write formatted data to the file
    fseek(fp, 0, SEEK_END);  // Reposition the file pointer
    printf("%ld", ftell(fp));  // Obtain the current file-pointer position
    fseek(fp, -4, SEEK_CUR);  // Reposition the file pointer
    char ch=fgetc(fp);  // Read a character from the file
    printf("%c", ch);  // Display output
    return 0;  // Indicate successful program termination
}
