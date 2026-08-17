/*
 * Program: Find Out The Error 9
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char str[]="Programming";  // Initialize a character array as a string
    strrev(str);
    printf("%s",str);  // Display output
    return 0;  // Indicate successful program termination
}
