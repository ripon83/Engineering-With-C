/*
 * Program: String Initialization 5
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[100];
    str[0] = 'H';
    str[1] = 'u';
    str[2] = 'm';
    str[3] = 'a';
    str[4] = 'n';
    str[5] = '\0';
    printf("%s", str);  // Display output
    return 0;  // Indicate successful program termination
}
