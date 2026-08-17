/*
 * Program: Six Building Blocks 7
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[] = "Your mindset shapes your results";  // Initialize a character array as a string
    char *ptr = str;  // Declare and initialize a character pointer
    ++*ptr++;
    printf("%s\n", str);  // Display output
    printf("%s", ptr);  // Display output
    return 0;  // Indicate successful program termination
}
