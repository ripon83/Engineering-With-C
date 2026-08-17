/*
 * Program: Formatted File Output 4
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "a");  // Open the file with the specified mode
    fprintf(fp, "Do not believe on your luck.\n");  // Write formatted data to the file
    fprintf(fp,"Believe on your work.\nLuck will always favor you.\n");  // Write formatted data to the file
    return 0;  // Indicate successful program termination
}
