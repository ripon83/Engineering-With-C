/*
 * Program: Pointer Assignment
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10;
    int *ptr = &x;

    printf("x=%d\t*ptr=%d\n", x, *ptr);  // Display output

    *ptr = 20;

    printf("x=%d\t*ptr=%d\n", x, *ptr);  // Display output

    return 0;  // Indicate successful program termination
}
