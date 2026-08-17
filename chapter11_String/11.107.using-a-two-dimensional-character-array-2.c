/*
 * Program: Using A Two Dimensional Character Array 2
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    char str[][7]={"God","Eshwar","Allah","Gott","Dio","Dieu"};  // Initialize a character array as a string

    printf("If \"%s\" is a synonym for \"%s\" or \"%s\",\n",  // Display output
           str[0], str[1], str[2]);

    printf("how can \"%s\" be better than \"%s\" or \"%s\",\n",  // Display output
           str[0], str[1], str[2]);

    printf("and vice versa?");  // Display output

    return 0;  // Indicate successful program termination
}
