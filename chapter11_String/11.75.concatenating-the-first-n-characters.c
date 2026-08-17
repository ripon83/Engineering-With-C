/*
 * Program: Concatenating The First N Characters
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char str1[100] = "Believe yourself, and start dreaming. ";  // Initialize a character array as a string
    char str2[100] = "Then, action is automatic.";  // Initialize a character array as a string
    strncat(str1, str2, 12);
    printf("Merged string is: \"%s\"", str1);  // Display output
    return 0;  // Indicate successful program termination
}
