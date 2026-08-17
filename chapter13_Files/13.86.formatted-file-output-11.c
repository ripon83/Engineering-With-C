/*
 * Program: Formatted File Output 11
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "w");  // Open the file with the specified mode
    fprintf(fp, "Rise and shine.");  // Write formatted data to the file
    fclose(fp);  // Close the file
    fp=fopen("input.txt", "w");  // Open the file with the specified mode
    fclose(fp);  // Close the file
    fp=fopen("input.txt", "r");  // Open the file with the specified mode
    char ch=fgetc(fp);  // Read a character from the file
    if(ch==EOF)
        printf("Empty");  // Display output
    else
        printf("%c", ch);  // Display output
    return 0;  // Indicate successful program termination
}
