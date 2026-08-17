/*
 * Program: Fseek File Pointer 11
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen(__FILE__, "a+");  // Open the file with the specified mode
    char buff[1024];
    fprintf(fp, "//Comments are added to understand the program\n");
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    while(!feof(fp))
    {
        fgets(buff, 1024, fp);  // Read a line/string from the file
        printf("%s", buff);  // Display output
        buff[0]='\0';
    }
    return 0;  // Indicate successful program termination
}

//Comments are added to understand the program
