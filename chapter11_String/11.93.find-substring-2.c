/*
 * Program: Find Substring 2
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

int main()  // Main function: program execution starts here
{
    char src[]="Hardworker";  // Initialize a character array as a string
    char sub[]="work";  // Initialize a character array as a string

    char *ptr=strstr(src, sub);  // Declare and initialize a character pointer

    printf("%p\n", ptr);  // Display output
    printf("%s\n", ptr);  // Display output

    return 0;  // Indicate successful program termination
}
