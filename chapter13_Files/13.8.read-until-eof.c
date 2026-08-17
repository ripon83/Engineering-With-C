/*
 * Program: Read Until Eof
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
#define myEOF -1
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "w+");  // Open the file with the specified mode
    char ch;
    fprintf(fp, "Learn to respect time. Otherwise, time will not respect you.");  // Write formatted data to the file
    rewind(fp);  // Move the file pointer back to the beginning
    while((ch=fgetc(fp))!=myEOF)  // Read a character from the file
        printf("%c", ch);  // Display output
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
