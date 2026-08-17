/*
 * Program: Fseek File Pointer 32
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "w+");  // Open the file with the specified mode
    fprintf(fp, "abcdef");  // Write formatted data to the file
    fseek(fp, 2, SEEK_SET);  // Reposition the file pointer
    fprintf(fp, "XY");  // Write formatted data to the file
    rewind(fp);  // Move the file pointer back to the beginning
    char str[10];
    fgets(str, sizeof(str), fp);  // Read a line/string from the file
    printf("%s", str);  // Display output
    return 0;  // Indicate successful program termination
}
