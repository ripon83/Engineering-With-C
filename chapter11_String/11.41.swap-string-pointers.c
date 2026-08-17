/*
 * Program: Swap String Pointers
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include<stdio.h>
void swap (char *m, char *n)
{
    char *t = m;  // Declare and initialize a character pointer
    m = n;
    n = t;
}
int main()   // Main function: program execution starts here
{
    char *x = "be the change";  // Declare and initialize a character pointer
    char *y = "you wish to see in the world";  // Declare and initialize a character pointer
    printf("Before swapping:\n");  // Display output
    printf("%s %s\n", x, y);  // Display output
    swap(x, y);
    printf("\nAfter swapping:\n");  // Display output
    printf("%s %s\n", x, y);  // Display output
    return 0;  // Indicate successful program termination
}
