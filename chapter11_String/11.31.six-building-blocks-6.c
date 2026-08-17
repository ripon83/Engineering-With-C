/*
 * Program: Six Building Blocks 6
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[] = "Own it";  // Initialize a character array as a string
    char *ptr = str;  // Declare and initialize a character pointer
    printf("%c\t", --*ptr);  // Display output
    printf("%s", ptr);  // Display output
    return 0;  // Indicate successful program termination
}
