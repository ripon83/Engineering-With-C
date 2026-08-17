/*
 * Program: Decimal To Binary Recursion
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

void binary(int n)
{
    if(n <= 0)
        return;

    binary(n / 2);  // Function call
    printf("%d", (n & 1));  // Display output
}

int main()  // Main function: execution starts here
{
    binary(28);  // Function call
    return 0;  // Indicate successful program termination
}
