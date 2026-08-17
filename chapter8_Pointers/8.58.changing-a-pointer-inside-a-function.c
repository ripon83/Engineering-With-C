/*
 * Program: Changing A Pointer Inside A Function
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

void foo(int *p, int *q)
{
    p = q;
    *p = 100;
}

int main()  // Main function: execution starts here
{
    int m = 0, n = 0;

    foo(&m, &n);

    printf("%d  %d\n", m, n);  // Display output

    return 0;  // Indicate successful program termination
}
