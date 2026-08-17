/*
 * Program: Binary File
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.bin", "wb");  // Open the file with the specified mode
    int n=125;
    fwrite(&n, sizeof(n), 1, fp);
    fclose(fp);  // Close the file
    
    fp=fopen("myfile.bin", "rb");  // Open the file with the specified mode
    int m;
    fread(&m, sizeof(m), 1, fp);
    printf("m=%d", m);  // Display output
    fclose(fp);  // Close the file
    
    return 0;  // Indicate successful program termination
}
