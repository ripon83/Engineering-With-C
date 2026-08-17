/*
 * Program: Read String With Gets
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[20];
    gets(str);
    printf("%s",str);  // Display output
    return 0;  // Indicate successful program termination
}
