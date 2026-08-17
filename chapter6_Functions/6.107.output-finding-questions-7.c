/*
 * Program: Output Finding Questions 7
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
int foo() 
{
    printf("Abcde");  // Display output
}
int main()   // Main function: execution starts here
{
    int x=foo();
    printf("\n%d", x);  // Display output
    return 0;  // Indicate successful program termination
}
