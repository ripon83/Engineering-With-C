/*
 * Program: Fseek File Pointer 34
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "w+");  // Open the file with the specified mode
    char str[100];
    fprintf(fp, "Keep going. Stay focused.\n");  // Write formatted data to the file
    fprintf(fp, "Be self-disciplined. Results are awesome.");  // Write formatted data to the file
    fseek(fp, -5, SEEK_SET);  // Reposition the file pointer
    fgets(str, sizeof(str), fp);  // Read a line/string from the file
    printf("%s", str);  // Display output
    return 0;  // Indicate successful program termination
}
