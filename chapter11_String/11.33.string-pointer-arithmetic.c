/*
 * Program: String Pointer Arithmetic
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[] = "Focus: stay calm and keep working";  // Initialize a character array as a string
    char *ptr = str;  // Declare and initialize a character pointer
    ptr = ptr + 7;
    printf("%s\n", ptr);  // Display output
    return 0;  // Indicate successful program termination
}
