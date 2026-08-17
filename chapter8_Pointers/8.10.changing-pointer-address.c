/*
 * Program: Changing Pointer Address
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10, y = 20;
    int *ptr = &x;

    printf("*ptr=%d\n", *ptr);  // Display output

    ptr = &y;

    printf("*ptr=%d\n", *ptr);  // Display output

    return 0;  // Indicate successful program termination
}
