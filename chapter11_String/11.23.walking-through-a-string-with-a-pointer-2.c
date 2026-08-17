/*
 * Program: Walking Through A String With A Pointer 2
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[] = "Curiosity is the engine of progress.";  // Initialize a character array as a string
    char *ptr = str;  // Declare and initialize a character pointer
    for (int i = 0; ptr[i] != '\0'; i++)  // Repeat over the required characters
    {
        printf("%c", ptr[i]);  // Display output
    }
    return 0;  // Indicate successful program termination
}
