/*
 * Program: Binary File Io 7
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char buff[1024];
    size_t n;
    FILE *fp=fopen("input.txt", "rb");  // Open the file with the specified mode
    FILE *fw=fopen("output.txt", "wb");  // Open the file with the specified mode
    while((n=fread(buff, 1, sizeof(buff), fp)) > 0)
    {
        fwrite(buff, 1, n, fw);
    }
    fclose(fp);  // Close the file
    fclose(fw);  // Close the file
    return 0;  // Indicate successful program termination
}
