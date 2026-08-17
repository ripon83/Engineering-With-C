/*
 * Program: String Initialization 3
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[] = "Religion makes a good human";  // Initialize a character array as a string
    for(int i = 0; str[i] != '\0'; i++)  // Repeat over the required characters
        printf("%c", str[i]);  // Display output
    return 0;  // Indicate successful program termination
}
