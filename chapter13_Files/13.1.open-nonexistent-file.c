/*
 * Program: Open Nonexistent File
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "r");  // Open the file with the specified mode
    if(fp==NULL)
        printf("Error! Unable to open the file.");  // Display output
    else
        printf("Successful.");  // Display output
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
