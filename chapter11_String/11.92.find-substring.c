/*
 * Program: Find Substring
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

    if(ptr!=NULL)
        printf("%s is a substring of %s\n", sub, src);  // Display output
    else
        printf("%s is not a substring of %s\n", sub, src);  // Display output

    return 0;  // Indicate successful program termination
}
