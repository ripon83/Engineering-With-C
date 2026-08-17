/*
 * Program: Rewind File Pointer 3
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "w+");  // Open the file with the specified mode
    fprintf(fp, "12 45 78");  // Write formatted data to the file
    rewind(fp);  // Move the file pointer back to the beginning
    int a, b, c;
    fscanf(fp, "%d %d %d", &a, &b, &c);  // Read formatted data from the file
    printf("%d", a+b+c);  // Display output
    return 0;  // Indicate successful program termination
}
