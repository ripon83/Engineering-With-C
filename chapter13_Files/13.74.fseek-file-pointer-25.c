/*
 * Program: Fseek File Pointer 25
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "a+");  // Open the file with the specified mode
    fprintf(fp, "People sacrifices comfort for better future.\n");  // Write formatted data to the file
    fprintf(fp, "However, many students sacrifices future for comfort.\n");  // Write formatted data to the file
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    fprintf(fp, "Comfort makes us poor.");  // Write formatted data to the file
    return 0;  // Indicate successful program termination
}
