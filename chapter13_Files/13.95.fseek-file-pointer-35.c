/*
 * Program: Fseek File Pointer 35
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "r+");  // Open the file with the specified mode
    fseek(fp, -10, SEEK_SET);  // Reposition the file pointer
    fprintf(fp, "Discipline");  // Write formatted data to the file
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
