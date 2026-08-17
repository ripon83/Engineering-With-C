/*
 * Program: Call By Value
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void swap(int m, int n)
{
    int tmp=m;
    m=n;
    n=tmp;

    printf("Inside: m=%d\tn=%d\n", m, n);  // Display output
}

int main()  // Main function: execution starts here
{
    int m=10, n=20;

    printf("Before: m=%d\tn=%d\n", m, n);  // Display output

    swap(m, n);

    printf("After: m=%d\tn=%d\n", m, n);  // Display output

    return 0;  // Indicate successful program termination
}
