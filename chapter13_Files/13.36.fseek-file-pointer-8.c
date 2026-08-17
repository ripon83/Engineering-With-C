/*
 * Program: Fseek File Pointer 8
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "a");  // Open the file with the specified mode
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    fprintf(fp, "\nWhy does it always add at the end of the file?\n");  // Write formatted data to the file
    return 0;  // Indicate successful program termination
}
