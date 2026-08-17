/*
 * Program: Formatted File Input 2
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n;
    char buff[1024];
    FILE *fp=fopen("myfile.txt", "r");  // Open the file with the specified mode
    while(fscanf(fp, "%*s %s", buff)==1)
        printf("%s\n", buff);   // Display output
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
