/*
 * Program: Binary File Io 9
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "w");  // Open the file with the specified mode
    int n=42;
    fwrite(n, sizeof(n), 1, fp);
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
