/*
 * Program: A Simpler Equivalent Program
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i, j, *p, *q;

    i = 10;
    p = &j;

    q = p;
    *q = 5;

    printf("%d %d %d %d", i, j, *p, *q);  // Display output

    return 0;  // Indicate successful program termination
}
