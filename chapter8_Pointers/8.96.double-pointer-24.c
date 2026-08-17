/*
 * Program: Double Pointer 24
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x = 10;
    int *p = &x;
    int **q = &p;
    int ***r = &q;
    ***r += 100;
    printf("%d\n", x);  // Display output
    return 0;  // Indicate successful program termination
}
