/*
 * Program: Find The Output 7
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[]="Life is learning";  // Initialize a character array as a string
    char *p=str;  // Declare and initialize a character pointer
    printf("%c\n",*++p);  // Display output
    printf("%c\n",*p++);  // Display output
    printf("%c\n",++*p);  // Display output
    printf("%s\n",str);  // Display output
    return 0;  // Indicate successful program termination
}
