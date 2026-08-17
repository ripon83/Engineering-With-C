/*
 * Program: String Initialization 8
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[] = "All religions\0 are equal.";  // Initialize a character array as a string
    printf("%s", str);  // Display output
    return 0;  // Indicate successful program termination
}
