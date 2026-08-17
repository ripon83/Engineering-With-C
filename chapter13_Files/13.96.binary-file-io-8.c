/*
 * Program: Binary File Io 8
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "r");  // Open the file with the specified mode
    char buff[10];
    fread(buff, 1, 1, fp);
    printf("%s", buff);  // Display output
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
