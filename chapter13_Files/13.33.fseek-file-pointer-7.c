/*
 * Program: Fseek File Pointer 7
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char buff[100];
    int i=0;
    FILE *fp=fopen("myfile.txt", "r+");  // Open the file with the specified mode
    fseek(fp, 0, SEEK_END);  // Reposition the file pointer
    fprintf(fp, "\n\nHuman respects human\nHuman helps human\nHuman loves human\nHuman welcomes human.");  // Write formatted data to the file
    return 0;  // Indicate successful program termination
}
