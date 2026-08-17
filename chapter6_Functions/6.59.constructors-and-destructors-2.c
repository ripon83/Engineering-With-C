/*
 * Program: Constructors And Destructors 2
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void __attribute__((constructor)) foo()
{
    printf("I am in foo\n");  // Display output
}

void __attribute__((destructor)) fobar()
{
    printf("I am in fobar\n");  // Display output
}

int main()  // Main function: execution starts here
{
    printf("I am in main\n");  // Display output
    return 0;  // Indicate successful program termination
}
