/*
 * Program: String Length 8
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[]="Computer";  // Initialize a character array as a string
    printf("%lu\n",sizeof(str));  // Display output
    printf("%lu\n",strlen(str));  // Display output
    return 0;  // Indicate successful program termination
}
