/*
 * Program: Double Pointer 18
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x = 10, y = 20;
    int *p = &x;
    int **q = &p;
    *q = &y;
    printf("%d %d\n", x, **q);  // Display output
    return 0;  // Indicate successful program termination
}
