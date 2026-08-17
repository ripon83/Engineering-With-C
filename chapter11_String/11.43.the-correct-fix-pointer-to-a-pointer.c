/*
 * Program: The Correct Fix Pointer To A Pointer
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char *x = "be the change";  // Declare and initialize a character pointer
    char *y = "you wish to see in the world";  // Declare and initialize a character pointer
    printf("x=%p  y=%p\n", x, y);  // Display output
    printf("&x=%p  &y=%p\n", &x, &y);  // Display output
    return 0;  // Indicate successful program termination
}
