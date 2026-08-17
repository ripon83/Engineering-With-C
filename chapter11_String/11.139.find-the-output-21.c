/*
 * Program: Find The Output 21
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[]="ABCDE";  // Initialize a character array as a string
    char *p=str;  // Declare and initialize a character pointer
    while(*p)  // Continue while the condition remains true
        printf("%c",*p++);  // Display output
    return 0;  // Indicate successful program termination
}
