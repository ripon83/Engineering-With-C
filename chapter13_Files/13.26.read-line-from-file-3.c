/*
 * Program: Read Line From File 3
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "r");  // Open the file with the specified mode
    char buff[101];
    while (!feof(fp)){
        fgets(buff, 100, fp);  // Read a line/string from the file
        printf("%s", buff);  // Display output
    }
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
