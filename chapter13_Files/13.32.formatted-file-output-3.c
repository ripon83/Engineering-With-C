/*
 * Program: Formatted File Output 3
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char buff[100];
    int i=0;
    FILE *fp=fopen("myfile.txt", "r+");  // Open the file with the specified mode
    fprintf(fp, "Dog disrespects dogs\nDog hinders dogs\nDog hates dogs\nDog fight with dogs.");  // Write formatted data to the file
    return 0;  // Indicate successful program termination
}
