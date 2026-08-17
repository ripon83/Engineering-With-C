/*
 * Program: Size Of String Array 2
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    char str[][7]={"God","Eshwar","Allah","Gott","Dio","Dieu"};  // Initialize a character array as a string

    printf("%ld", sizeof(str));  // Display output

    return 0;  // Indicate successful program termination
}
