/*
 * Program: Formatted File Output 10
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "w");  // Open the file with the specified mode
    fprintf(fp, "Success\nFailure\nRetry");  // Write formatted data to the file
    fclose(fp);  // Close the file
    fp=fopen("input.txt", "a");  // Open the file with the specified mode
    fprintf(fp, "\nRepeat");  // Write formatted data to the file
    fclose(fp);  // Close the file
    fp=fopen("input.txt", "r");  // Open the file with the specified mode
    char str[100];
    while(fgets(str, sizeof(str), fp)!=NULL)  // Read a line/string from the file
        printf("[%s]", str);  // Display output
    return 0;  // Indicate successful program termination
}
