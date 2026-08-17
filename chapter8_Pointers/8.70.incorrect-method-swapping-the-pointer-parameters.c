/*
 * Program: Incorrect Method Swapping The Pointer Parameters
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

void swap(int *x, int *y)
{
    int *tmp;

    tmp = x;
    x = y;
    y = tmp;
}

int main()  // Main function: execution starts here
{
    int m = 10, n = 20;

    printf("Before: m=%d\tn=%d\n", m, n);  // Display output
    swap(&m, &n);
    printf("After: m=%d\tn=%d\n", m, n);  // Display output

    return 0;  // Indicate successful program termination
}
