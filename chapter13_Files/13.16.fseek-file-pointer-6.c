/*
 * Program: Fseek File Pointer 6
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "w+");  // Open the file with the specified mode
    fprintf(fp, "abcdefghijklmnopqrstuvwxyz");  // Write formatted data to the file
    printf("After the writing, the file pointer points to: %ld\n",ftell(fp));  // Obtain the current file-pointer position
    fseek(fp, -10, SEEK_CUR);  // Reposition the file pointer
    printf("Moving file pointer 10 bytes backward and the file pointer is: %ld\n", ftell(fp));  // Obtain the current file-pointer position
    fseek(fp, -6, SEEK_CUR);  // Reposition the file pointer
    printf("Again moving 6 bytes backward and the file pointer is: %ld\n", ftell(fp));  // Obtain the current file-pointer position
    printf("The file pointer pointing to the character is: %c\n", fgetc(fp));  // Read a character from the file
    printf("After reading the file pointer is: %ld\n", ftell(fp));  // Obtain the current file-pointer position
    fseek(fp, 6, SEEK_CUR);  // Reposition the file pointer
    printf("Again moving 6 bytes forward and the file pointer is: %ld\n", ftell(fp));  // Obtain the current file-pointer position
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
