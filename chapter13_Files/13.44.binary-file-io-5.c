/*
 * Program: Binary File Io 5
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.bin", "wb");  // Open the file with the specified mode
    int r, n=10;
    srand(clock());
    printf("Data written into the file:\n");  // Display output
    for(int i=0; i<n; i++)
    {
        r=rand();
        printf("%d\t", r);  // Display output
        fwrite(&r, sizeof(r), 1, fp);
    }
    fclose(fp);  // Close the file
    
    printf("\n\nData read from the file:\n");  // Display output
    fp=fopen("myfile.bin", "rb");  // Open the file with the specified mode
    for(int i=0; i<n; i++)
    {
        fread(&r, sizeof(r), 1, fp);
        printf("%d\t", r);  // Display output
    }
    fclose(fp);      // Close the file
    return 0;  // Indicate successful program termination
}
