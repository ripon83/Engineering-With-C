/*
 * Program: Return Local String
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
char *getString()
{
    char str[] = "If you think negatively about others, you are actually hurting yourself.";  // Initialize a character array as a string
    return str;
}
int main()  // Main function: program execution starts here
{
    printf("%s", getString());  // Display output
    return 0;  // Indicate successful program termination
}
