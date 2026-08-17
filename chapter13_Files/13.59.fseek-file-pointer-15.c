/*
 * Program: Fseek File Pointer 15
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void swap(FILE *fp1, FILE *fp2)
{
    fseek(fp1, 0, SEEK_END);  // Reposition the file pointer
    fseek(fp2, 0, SEEK_END);  // Reposition the file pointer
    
    int m=ftell(fp1);  // Obtain the current file-pointer position
    int n=ftell(fp2);  // Obtain the current file-pointer position
    
    fseek(fp1, 0, SEEK_SET);  // Reposition the file pointer
    fseek(fp2, 0, SEEK_SET);  // Reposition the file pointer
    
    char *data1=(char *)malloc(m+1);
    char *data2=(char *)malloc(n+1);
    
    fread(data1, 1, m, fp1);
    fread(data2, 1, n, fp2);
    
    fseek(fp1, 0, SEEK_SET);  // Reposition the file pointer
    fseek(fp2, 0, SEEK_SET);  // Reposition the file pointer
    
    ftruncate(fileno(fp1), 0);
    ftruncate(fileno(fp2), 0);
    
    fwrite(data2, 1, n, fp1);
    fwrite(data1, 1, m, fp2);
    
    fclose(fp1);  // Close the file
    fclose(fp2);  // Close the file
    free(data1);
    free(data2);
}
int main()  // Main function: program execution starts here
{
    FILE *fp1=fopen("file1.txt", "r+");  // Open the file with the specified mode
    FILE *fp2=fopen("file2.txt", "r+");  // Open the file with the specified mode
    swap(fp1, fp2);
    return 0;  // Indicate successful program termination
}
