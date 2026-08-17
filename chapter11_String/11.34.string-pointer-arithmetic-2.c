/*
 * Program: String Pointer Arithmetic 2
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[] = "Plan: prepare well and stay ready";  // Initialize a character array as a string
    char *ptr = str;  // Declare and initialize a character pointer
    ptr = ptr + 6;
    printf("%s\n", ptr);  // Display output
    ptr = ptr - 6;
    printf("%s\n", ptr);  // Display output
    return 0;  // Indicate successful program termination
}
