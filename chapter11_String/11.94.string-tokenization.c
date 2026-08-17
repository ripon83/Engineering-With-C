/*
 * Program: String Tokenization
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

int main()  // Main function: program execution starts here
{
    char str[] =  // Initialize a character array as a string
    "The future belongs to those who believe in the beauty of their dreams";

    char *token = NULL;  // Declare and initialize a character pointer
    char delim[] = " ";  // Initialize a character array as a string

    for(token = strtok(str, delim);  // Repeat over the required characters
        token != NULL;
        token = strtok(NULL, delim))
    {
        printf("%s\n", token);  // Display output
    }

    return 0;  // Indicate successful program termination
}
