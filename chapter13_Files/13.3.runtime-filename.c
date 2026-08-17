/*
 * Program: Runtime Filename
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char filename[1024];
    printf("Enter the filename:");  // Display output
    scanf("%s", filename);  // Read input from the user
    FILE *fp=fopen(filename, "w");  // Open the file with the specified mode
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
