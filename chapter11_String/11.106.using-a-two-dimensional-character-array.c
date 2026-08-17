/*
 * Program: Using A Two Dimensional Character Array
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    char str[][7]={"God", "Eshwar", "Allah", "Gott", "Dio", "Dieu"};  // Initialize a character array as a string
    int n=6;

    for(int i=0; i<n; i++)  // Repeat over the required characters
        printf("%s\t", str[i]);  // Display output

    return 0;  // Indicate successful program termination
}
