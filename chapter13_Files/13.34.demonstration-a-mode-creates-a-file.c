/*
 * Program: Demonstration A Mode Creates A File
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "a");  // Open the file with the specified mode
    if(fp==NULL)
        printf("Error! Unable to open the file.\n");  // Display output
    else
        printf("A file is created in \"a\" mode if the file does not exist.\n");  // Display output
    return 0;  // Indicate successful program termination
}
