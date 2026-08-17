/*
 * Program: String Copy 6
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char str[]="abcdef";  // Initialize a character array as a string
    strcpy(str+2,"XYZ");  // Copy the source string into the destination
    printf("%s\n",str);  // Display output
    return 0;  // Indicate successful program termination
}
