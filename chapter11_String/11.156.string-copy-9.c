/*
 * Program: String Copy 9
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: program execution starts here
{
    char *str=malloc(20);  // Declare and initialize a character pointer
    strcpy(str,"Programming");  // Copy the source string into the destination
    free(str);
    free(str);
    return 0;  // Indicate successful program termination
}
