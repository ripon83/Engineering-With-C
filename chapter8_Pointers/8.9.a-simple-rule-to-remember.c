/*
 * Program: A Simple Rule To Remember
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10;

    printf("x=%d\t*(&x)=%d\n", x, *(&x));  // Display output

    *(&x) = 20;

    printf("x=%d\t*(&x)=%d\n", x, *(&x));  // Display output

    return 0;  // Indicate successful program termination
}
