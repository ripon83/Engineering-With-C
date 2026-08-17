/*
 * Program: Size Of String Pointer
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char *ptr = "Every expert was once a beginner";  // Declare and initialize a character pointer
    printf("%ld", sizeof(ptr));  // Display output
    return 0;  // Indicate successful program termination
}
