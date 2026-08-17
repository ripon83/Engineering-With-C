/*
 * Program: Copying A Pointer
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10, y = 20;
    int *ptr = &x;

    int *p = ptr;

    printf("%d\n", *p);  // Display output

    return 0;  // Indicate successful program termination
}
