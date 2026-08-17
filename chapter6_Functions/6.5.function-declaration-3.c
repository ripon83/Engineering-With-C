/*
 * Program: Function Declaration 3
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void foo2()
{
    printf("Foo2 function");  // Display output
}

void foo1()
{
    foo2();
}

int main()  // Main function: execution starts here
{
    foo1();
    return 0;  // Indicate successful program termination
}
