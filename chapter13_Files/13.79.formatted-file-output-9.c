/*
 * Program: Formatted File Output 9
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "w");  // Open the file with the specified mode
    fprintf(fp, "Discipline beats motivation.");  // Write formatted data to the file
    fclose(fp);  // Close the file
    fp=fopen("input.txt", "r");  // Open the file with the specified mode
    char ch;
    while((ch=fgetc(fp))!=EOF)  // Read a character from the file
        printf("%c", ch);  // Display output
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
