/*
 * Program: Output Finding Questions 8
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
int foo() 
{
    int x=10;
    printf("Abc=%d", x);  // Display output
}
int main()   // Main function: execution starts here
{
    int x=foo();
    printf("\n%d", x);  // Display output
    return 0;  // Indicate successful program termination
}
