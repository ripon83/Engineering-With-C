/*
 * Program: Binary File Io
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "r");  // Open the file with the specified mode
    char buff[1024];
    int i=0, n;
    while(!feof(fp))
    {
        n=fread(buff, 1, sizeof(buff)-1, fp);
        buff[n]='\0';
        printf("Iteration %d: %s", ++i, buff);  // Display output
    }
    return 0;  // Indicate successful program termination
}
