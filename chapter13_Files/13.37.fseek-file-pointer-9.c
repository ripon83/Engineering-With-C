/*
 * Program: Fseek File Pointer 9
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "a+");  // Open the file with the specified mode
    char buff[1024];
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    while(fread(buff, 1, 1024, fp)>0)
        printf("%s", buff);  // Display output
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
