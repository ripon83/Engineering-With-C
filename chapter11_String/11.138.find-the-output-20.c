/*
 * Program: Find The Output 20
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char *p="Success";  // Declare and initialize a character pointer
    printf("%c\n",*p++);  // Display output
    printf("%c\n",*p);  // Display output
    printf("%c\n",*(p+2));  // Display output
    return 0;  // Indicate successful program termination
}
