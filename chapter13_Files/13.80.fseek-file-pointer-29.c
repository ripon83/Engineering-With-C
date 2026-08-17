/*
 * Program: Fseek File Pointer 29
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "w+");  // Open the file with the specified mode
    fprintf(fp, "abcdefghij");  // Write formatted data to the file
    fseek(fp, 3, SEEK_SET);  // Reposition the file pointer
    printf("%ld", ftell(fp));  // Obtain the current file-pointer position
    return 0;  // Indicate successful program termination
}
