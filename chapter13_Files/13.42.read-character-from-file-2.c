/*
 * Program: Read Character From File 2
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()   // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "r");  // Open the file with the specified mode
    char ch, key='?';
    while((ch=fgetc(fp)) != EOF)  // Read a character from the file
    {
        if(ch==key)
            break;
    }
    if(feof(fp))
        printf("Not found!");  // Display output
    else
        printf("Found!");  // Display output
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
