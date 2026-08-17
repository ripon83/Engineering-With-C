/*
 * Program: Call By Value 3
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void swap(int x, int y)
{
    int tmp=x;
    x=y;
    y=tmp;

    printf("Inside: x=%d\ty=%d\n", x, y);  // Display output
}

int main()  // Main function: execution starts here
{
    int m=10, n=20;

    printf("Before: m=%d\tn=%d\n", m, n);  // Display output

    swap(m, n);

    printf("After: m=%d\tn=%d\n", m, n);  // Display output

    return 0;  // Indicate successful program termination
}
