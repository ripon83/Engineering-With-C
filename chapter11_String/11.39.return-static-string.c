/*
 * Program: Return Static String
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
char *getString()
{
    static char str[] = "Avoid negative thoughts about others.";
    return str;
}
int main()  // Main function: program execution starts here
{
    printf("%s", getString());  // Display output
    return 0;  // Indicate successful program termination
}
