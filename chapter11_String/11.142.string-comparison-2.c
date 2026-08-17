/*
 * Program: String Comparison 2
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char str[]="abcdef";  // Initialize a character array as a string
    printf("%d\n",  // Display output
        memcmp(str,"abcxyz",3));
    printf("%d\n",  // Display output
        strcmp(str,"abcxyz"));
    return 0;  // Indicate successful program termination
}
