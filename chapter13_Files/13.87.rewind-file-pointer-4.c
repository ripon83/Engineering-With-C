/*
 * Program: Rewind File Pointer 4
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "w+");  // Open the file with the specified mode
    fprintf(fp, "Focus\nGrit\nGrind");  // Write formatted data to the file
    rewind(fp);  // Move the file pointer back to the beginning
    char str[50];
    int lines=0;
    while(fgets(str, sizeof(str), fp)!=NULL)  // Read a line/string from the file
        lines++;
    printf("%d", lines);  // Display output
    return 0;  // Indicate successful program termination
}
