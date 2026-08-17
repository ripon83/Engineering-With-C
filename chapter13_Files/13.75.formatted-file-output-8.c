/*
 * Program: Formatted File Output 8
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "a+");  // Open the file with the specified mode
    char str[100];
    fprintf(fp, "Legend never surrenders even if they fail hard.");  // Write formatted data to the file
    fgets(str, sizeof(str), fp);  // Read a line/string from the file
    printf("%s", str);  // Display output
    return 0;  // Indicate successful program termination
}
