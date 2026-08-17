/*
 * Program: Double Pointer 9
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x=5, y=10;
    int *p=&x;
    int **pp=&p;
    int ***tp=&pp;

    *p=y;

    printf("x=%d\n", x);  // Display output
    printf("***tp=%d", ***tp);  // Display output

    return 0;  // Indicate successful program termination
}
