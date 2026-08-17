/*
 * Program: Pointing To A String
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[] = "Practice makes perfect";  // Initialize a character array as a string
    char *ptr = str;  // Declare and initialize a character pointer
    printf("%s", ptr);  // Display output
    return 0;  // Indicate successful program termination
}
