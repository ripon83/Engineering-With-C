/*
 * Program: Copying The First N Characters Strncpy
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char str[] = "We lose because we defeat ourselves.";  // Initialize a character array as a string
    char des[100];
    strncpy(des, str, 13);
    des[13] = '\0';
    printf("Copied string is: \"%s\"", des);  // Display output
    return 0;  // Indicate successful program termination
}
