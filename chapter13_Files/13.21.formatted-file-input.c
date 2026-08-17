/*
 * Program: Formatted File Input
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char buff[1024];
    int i=0;
    FILE *fp=fopen("myfile.txt", "r");  // Open the file with the specified mode
    while(fscanf(fp, "%s", buff)==1)
        printf("Iteration %d: %s\n", ++i, buff);   // Display output
     fclose(fp);  // Close the file
     return 0;  // Indicate successful program termination
}
