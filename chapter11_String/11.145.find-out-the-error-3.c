/*
 * Program: Find Out The Error 3
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: program execution starts here
{
    char *str=malloc(5);  // Declare and initialize a character pointer
    str="test";
    printf("%s\n",str);  // Display output
    free(str);
    return 0;  // Indicate successful program termination
}
