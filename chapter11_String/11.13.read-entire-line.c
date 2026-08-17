/*
 * Program: Read Entire Line
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[100];
    printf("Enter the string: ");  // Display output
    scanf("%99[^\n]", str);  // Read input
    printf("You have entered: \"%s\"", str);  // Display output
    return 0;  // Indicate successful program termination
}
