/*
 * Program: Double Pointer 7
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x=10,y=20;
    int *ptr=&x;
    int **pp=&ptr;
    int ***tp=&pp;

    ***tp+=100;
    printf("x=%d\n", x);  // Display output

    **tp=&y;

    printf("*ptr=%d\n", *ptr);  // Display output
    printf("**pp=%d\n", **pp);  // Display output

    return 0;  // Indicate successful program termination
}
