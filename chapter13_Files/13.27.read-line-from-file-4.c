/*
 * Program: Read Line From File 4
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "r");  // Open the file with the specified mode
    char buff[1024];
    int i=0;
    while (!feof(fp)){
        fgets(buff, 1024, fp);  // Read a line/string from the file
        printf("Iteration %d: %s", ++i, buff);  // Display output
    }
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
