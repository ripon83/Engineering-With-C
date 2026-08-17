/*
 * Program: Find Out The Error 8
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char str1[]="Hello";  // Initialize a character array as a string
    char str2[]="World";  // Initialize a character array as a string
    if(str1==str2)
        printf("Equal");  // Display output
    else
        printf("Not Equal");  // Display output
    return 0;  // Indicate successful program termination
}
