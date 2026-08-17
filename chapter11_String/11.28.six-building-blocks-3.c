/*
 * Program: Six Building Blocks 3
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[] = "Fear";  // Initialize a character array as a string
    char *ptr = str;  // Declare and initialize a character pointer
    ++(*ptr);          // same as ++*ptr
    printf("%s\n", ptr);  // Display output
    return 0;  // Indicate successful program termination
}
