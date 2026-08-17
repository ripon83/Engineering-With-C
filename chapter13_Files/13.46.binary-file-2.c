/*
 * Program: Binary File 2
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.bin", "wb");  // Open the file with the specified mode
    char str[]="Procastination is the root cause of tension and pressure in workplace.";
    fwrite(&str, sizeof(str), 1, fp);
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
