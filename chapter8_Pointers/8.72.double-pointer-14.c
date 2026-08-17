/*
 * Program: Double Pointer 14
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

void swap(int **p, int **q)
{
    int tmp = **p;
    **p = **q;
    **q = tmp;
}

int main()  // Main function: execution starts here
{
    int x = 10, y = 20;
    int *p = &x, *q = &y;

    swap(&p, &q);

    printf("x=%d\ty=%d\n", x, y);  // Display output

    return 0;  // Indicate successful program termination
}
