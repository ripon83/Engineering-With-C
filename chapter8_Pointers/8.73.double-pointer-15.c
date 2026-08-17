/*
 * Program: Double Pointer 15
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

void swap(int **p, int **q)
{
    int *tmp;

    tmp = *p;
    *p = *q;
    *q = tmp;
}

int main()  // Main function: execution starts here
{
    int x = 10, y = 20;
    int *ptr1 = &x, *ptr2 = &y;

    swap(&ptr1, &ptr2);

    printf("x=%d\ty=%d\n", x, y);  // Display output
    printf("*ptr1=%d\t*ptr2=%d\n", *ptr1, *ptr2);  // Display output

    return 0;  // Indicate successful program termination
}
