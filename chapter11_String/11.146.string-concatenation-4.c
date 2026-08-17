/*
 * Program: String Concatenation 4
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char *s1="Beauty is ephemeral";  // Declare and initialize a character pointer
    char *s2="Beautiful mind is eternal";  // Declare and initialize a character pointer
    strcat(s1,s2);  // Append one string to another
    printf("%s\n",s1);  // Display output
    return 0;  // Indicate successful program termination
}
