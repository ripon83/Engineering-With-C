/*
 * Program: Double Pointer 26
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x = 10;
    int *p = &x;
    int **q = &p;
    printf("%d\n", **q + *p + x);  // Display output
    return 0;  // Indicate successful program termination
}
