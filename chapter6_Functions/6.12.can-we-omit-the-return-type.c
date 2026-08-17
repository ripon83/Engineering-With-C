/*
 * Program: Can We Omit The Return Type
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

foo()
{
    int m=10;
    return m;
}

int main()  // Main function: execution starts here
{
    printf("%d", foo());  // Display output
    return 0;  // Indicate successful program termination
}
