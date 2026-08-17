/*
 * Program: Size Of A Pointer
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10;
    int *ptr = &x;

    printf("%zu\t%zu", sizeof(*ptr), sizeof(ptr));  // Display output

    return 0;  // Indicate successful program termination
}
