/*
 * Program: Pointer Vs Array A Crucial Distinction
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[1024];
    str = "This line will not compile";   // Error
    printf("%s", str);  // Display output
    return 0;  // Indicate successful program termination
}
