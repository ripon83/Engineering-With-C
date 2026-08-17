/*
 * Program: Formatted File Output 12
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "r");  // Open the file with the specified mode
    fprintf(fp, "Never stop learning.");  // Write formatted data to the file
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
