/*
 * Program: Null Pointer
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int *ptr = NULL;    // null pointer

    *ptr = 20;          // undefined behavior

    printf("%d", *ptr);  // Display output

    return 0;  // Indicate successful program termination
}
