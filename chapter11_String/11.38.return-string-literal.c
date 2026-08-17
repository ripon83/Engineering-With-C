/*
 * Program: Return String Literal
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
char *getString()
{
    char *str = "Avoid negative thoughts about others";  // Declare and initialize a character pointer
    return str;
}
int main()  // Main function: program execution starts here
{
    printf("%s", getString());  // Display output
    return 0;  // Indicate successful program termination
}
