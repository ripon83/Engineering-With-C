/*
 * Program: Rewind File Pointer 2
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "w+");  // Open the file with the specified mode
    fprintf(fp, "Practice makes perfect.");  // Write formatted data to the file
    rewind(fp);  // Move the file pointer back to the beginning
    char ch;
    int count=0;
    while((ch=fgetc(fp))!=EOF)  // Read a character from the file
    {
        if(ch=='e')
            count++;
    }
    printf("%d", count);  // Display output
    return 0;  // Indicate successful program termination
}
