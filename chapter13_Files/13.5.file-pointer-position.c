/*
 * Program: File Pointer Position
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "w");  // Open the file with the specified mode
    printf("File pointer at the starting is %ld\n", ftell(fp));  // Obtain the current file-pointer position
    fprintf(fp,"Learn to respect time. Otherwise, time will not respect you.");  // Write formatted data to the file
    printf("File pointer at the ending is %ld\n", ftell(fp));  // Obtain the current file-pointer position
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
