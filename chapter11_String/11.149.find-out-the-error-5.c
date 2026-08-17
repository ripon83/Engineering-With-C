/*
 * Program: Find Out The Error 5
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char *str="Good";  // Declare and initialize a character pointer
    str[0]='M';
    printf("%s",str);  // Display output
    return 0;  // Indicate successful program termination
}
