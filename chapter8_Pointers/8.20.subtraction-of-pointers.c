/*
 * Program: Subtraction Of Pointers
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10, y = 20;
    int *p = &x, *q = &y;

    printf("p=%p\tq=%p\t(q-p)=%td\n", p, q, q-p);  // Display output

    return 0;  // Indicate successful program termination
}
