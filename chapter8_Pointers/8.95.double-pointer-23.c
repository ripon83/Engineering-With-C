/*
 * Program: Double Pointer 23
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x = 10;
    int **q;
    int *p = &x;
    q = &p;
    printf("%d\n", **q);  // Display output
    return 0;  // Indicate successful program termination
}
