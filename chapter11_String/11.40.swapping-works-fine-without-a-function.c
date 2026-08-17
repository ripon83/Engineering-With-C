/*
 * Program: Swapping Works Fine Without A Function
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include<stdio.h>
int main()  // Main function: program execution starts here
{
    char *x = "Keep it simple";  // Declare and initialize a character pointer
    char *y = "Make it count";  // Declare and initialize a character pointer
    char *t;
    printf("Before swapping:\n");  // Display output
    printf("%s %s\n", x, y);  // Display output
    t = x;
    x = y;
    y = t;
    printf("\nAfter swapping:\n");  // Display output
    printf("%s %s\n", x, y);  // Display output
    return 0;  // Indicate successful program termination
}
