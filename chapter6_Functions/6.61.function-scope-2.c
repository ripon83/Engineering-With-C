/*
 * Program: Function Scope 2
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int m=10; //global variable

void foo()
{
    int m=20; //local variable
    printf("Inside foo: %d\n", m);  // Display output
}

int main()  // Main function: execution starts here
{
    foo();

    {
        static int m=30;
        printf("Inside anonymous block: %d\n", m);  // Display output
    }

    printf("Inside main block: %d\n", m);  // Display output

    return 0;  // Indicate successful program termination
}
