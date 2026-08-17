/*
 * Program: Function Declaration
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void foo1()
{
    foo2();
}

void foo2()
{
    printf("Foo2 function");  // Display output
}

int main()  // Main function: execution starts here
{
    foo1();
}
