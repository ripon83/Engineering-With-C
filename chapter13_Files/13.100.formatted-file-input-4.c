/*
 * Program: Formatted File Input 4
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "w+");  // Open the file with the specified mode
    char word[100];
    fscanf(fp, "%s", word);  // Read formatted data from the file
    printf("%s", word);  // Display output
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
