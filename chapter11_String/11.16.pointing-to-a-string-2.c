/*
 * Program: Pointing To A String 2
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[] = "Small steps lead to big results";  // Initialize a character array as a string
    char *ptr;
    ptr = str;
    printf("%s", ptr);  // Display output
    return 0;  // Indicate successful program termination
}
