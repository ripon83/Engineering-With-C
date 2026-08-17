/*
 * Program: Write To File
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "w");  // Open the file with the specified mode
    if(fp==NULL)
    {
        printf("Error! File cannot be created.");  // Display output
    }
    fprintf(fp,"Learn to respect time. Otherwise, time will not respect you");  // Write formatted data to the file
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
