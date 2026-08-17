/*
 * Program: Find Out The Error
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char *str="No pain no gain";  // Declare and initialize a character pointer
    str[0]='n';
    printf("%s\n", str);  // Display output
    return 0;  // Indicate successful program termination
}
