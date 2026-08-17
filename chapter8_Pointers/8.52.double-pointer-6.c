/*
 * Program: Double Pointer 6
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x=10;
    int *ptr=&x;
    int **pp=&ptr;
    int ***tp=&pp;

    ***tp+=100;
    printf("%d", x);  // Display output

    return 0;  // Indicate successful program termination
}
