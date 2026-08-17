/*
 * Program: Double Pointer 13
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int foo(int x, int *p, int **pp)
{
    int y, z;

    x = x + 10;
    *p = *p / 2;
    y = *p;
    **pp = **pp * 5;
    z = **pp;

    return x + y + z;
}

int main()  // Main function: execution starts here
{
    int m = 10, *sp, **dp;

    sp = &m;
    dp = &sp;

    printf("%d", foo(m, sp, dp));  // Display output

    return 0;  // Indicate successful program termination
}
