/*
 * Program: Null Character
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include<stdio.h>
int main()  // Main function: program execution starts here
{
    char str[10] = "\0";  // Initialize a character array as a string
    if(printf("%s", str))
        printf("inside if block");  // Display output
    else
        printf("inside else block");  // Display output
    return 0;  // Indicate successful program termination
}
