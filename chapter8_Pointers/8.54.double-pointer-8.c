/*
 * Program: Double Pointer 8
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x=10, y=20;
    int *p=&x, *q=&y;
    int **pp=&p;
    int ***tp=&pp;

    ***tp+=100;
    printf("x=%d\n", x);  // Display output

    **tp=q;

    printf("*p=%d\n", *p);  // Display output
    printf("**pp=%d\n", **pp);  // Display output

    return 0;  // Indicate successful program termination
}
