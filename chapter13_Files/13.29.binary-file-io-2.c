/*
 * Program: Binary File Io 2
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "r");  // Open the file with the specified mode
    char buff[100];
    while(fread(buff, 1, 1, fp) > 0)
    {
        printf("%s", buff);  // Display output
    }
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
