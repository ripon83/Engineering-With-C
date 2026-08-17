/*
 * Program: Changing Pointer Address 2
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10, y = 20;
    int *ptr = &x;

    printf("*ptr=%d\n", *ptr);  // Display output

    *ptr = &y;    // Invalid

    printf("*ptr=%d\n", *ptr);  // Display output

    return 0;  // Indicate successful program termination
}
