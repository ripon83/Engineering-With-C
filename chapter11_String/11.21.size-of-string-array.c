/*
 * Program: Size Of String Array
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[] = "A good habit repeated daily builds a strong future";  // Initialize a character array as a string
    printf("%ld", sizeof(str));  // Display output
    return 0;  // Indicate successful program termination
}
