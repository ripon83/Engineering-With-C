/*
 * Program: Find The Output 4
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char *str1="abcefg";  // Declare and initialize a character pointer
    char *str2="abcefg";  // Declare and initialize a character pointer
    if(str1==str2)
        printf("Same\n");  // Display output
    else
        printf("Different\n");  // Display output
    return 0;  // Indicate successful program termination
}
