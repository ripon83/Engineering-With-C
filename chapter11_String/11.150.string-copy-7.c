/*
 * Program: String Copy 7
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char str[10];
    strcpy(str,"Programming");  // Copy the source string into the destination
    printf("%s\n",str);  // Display output
    return 0;  // Indicate successful program termination
}
