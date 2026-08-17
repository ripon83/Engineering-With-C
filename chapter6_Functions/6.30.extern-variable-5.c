/*
 * Program: Extern Variable 5
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void foo1()
{
    extern void foo2();
    foo2();
}

void foo2()
{
    printf("Foo2 function");  // Display output
}

int main()  // Main function: execution starts here
{
    foo1();
    return 0;  // Indicate successful program termination
}
