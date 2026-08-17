/*
 * Program: String Concatenation 5
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char str1[]="Open ";  // Initialize a character array as a string
    char str2[]="Secret";  // Initialize a character array as a string
    strcat(str1,str2);  // Append one string to another
    printf("%s",str1);  // Display output
    return 0;  // Indicate successful program termination
}
