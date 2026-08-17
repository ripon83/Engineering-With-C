/*
 * Program: Find Out The Error 6
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char str[]="Knowledge";  // Initialize a character array as a string
    memcpy(str+2,str,8);
    printf("%s",str);  // Display output
    return 0;  // Indicate successful program termination
}
