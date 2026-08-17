/*
 * Program: Pointer Assignment 6
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x=10, y=20;
    int *ptr1=&x, *ptr2=&y;
    int **pp1=&ptr1, **pp2=&ptr2;

    pp1=pp2;
    **pp1=100;

    printf("%d\n", y);  // Display output
    return 0;  // Indicate successful program termination
}
