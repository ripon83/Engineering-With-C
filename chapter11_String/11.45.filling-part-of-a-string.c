/*
 * Program: Filling Part Of A String
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char str[1024] = "Even and odds";  // Initialize a character array as a string
    memset(str+4, '-', 5*sizeof(str[0]));
    printf("%s", str);  // Display output
    return 0;  // Indicate successful program termination
}
