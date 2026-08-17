/*
 * Program: Find Out The Error 7
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[5];
    for(int i=0;i<=5;i++)  // Repeat over the required characters
        str[i]='A';
    printf("%s",str);  // Display output
    return 0;  // Indicate successful program termination
}
