/*
 * Program: The Memmove
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char str[1024] = "Learn from the mistake. So, make a habit of reading errors.";  // Initialize a character array as a string
    memmove(str+2, str, 16);
    printf("%s\n", str);  // Display output
    return 0;  // Indicate successful program termination
}
