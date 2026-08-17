/*
 * Program: Binary File Io 6
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.bin", "wb");  // Open the file with the specified mode
    int arr[10], n=10;
    srand(clock());
    for(int i=0; i<n; i++)
        arr[i]=rand();
    fwrite(arr, sizeof(int), n, fp);   // ONE call writes all 10 values
    fclose(fp);  // Close the file

    fp=fopen("myfile.bin", "rb");  // Open the file with the specified mode
    int result[10];
    fread(result, sizeof(int), n, fp); // ONE call reads all 10 values
    for(int i=0; i<n; i++)
        printf("%d\t", result[i]);  // Display output
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
