/*
 * Program: Fseek File Pointer 31
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "w+");  // Open the file with the specified mode
    int n=27;
    fwrite(&n, sizeof(n), 1, fp);
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    int m;
    fread(&m, sizeof(m), 1, fp);
    printf("%d", m+3);  // Display output
    return 0;  // Indicate successful program termination
}
