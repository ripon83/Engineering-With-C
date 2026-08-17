/*
 * Program: Function Declaration 2
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void foo2();      // Declaration

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
