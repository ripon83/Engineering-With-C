/*
 * Program: Function Parameters
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void foo(int n, int m)
{
    printf("m=%d\tn=%d\n", m, n);  // Display output
}

int main()  // Main function: execution starts here
{
    int m=20, n=10;

    foo(m, n);
    foo(n, m);

    return 0;  // Indicate successful program termination
}
