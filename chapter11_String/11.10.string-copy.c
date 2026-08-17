/*
 * Program: String Copy
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char str[100];
    strcpy(str, "Learn to respect humanity.");  // Copy the source string into the destination
    printf("%s", str);  // Display output
    return 0;  // Indicate successful program termination
}
