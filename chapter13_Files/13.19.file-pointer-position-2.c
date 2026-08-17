/*
 * Program: File Pointer Position 2
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "r");  // Open the file with the specified mode
    char ch;
    fseek(fp, 0, SEEK_END);  // Reposition the file pointer
    printf("%ld", ftell(fp));  // Obtain the current file-pointer position
    return 0;  // Indicate successful program termination
}
