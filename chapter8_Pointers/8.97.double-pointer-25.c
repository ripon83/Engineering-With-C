/*
 * Program: Double Pointer 25
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x = 5, y = 10;
    int *p = &x;
    int **q = &p;
    int ***r = &q;

    **r = &y;
    printf("%d %d\n", *p, **q);  // Display output
    return 0;  // Indicate successful program termination
}
