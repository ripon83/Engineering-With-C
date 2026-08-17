/*
 * Program: Void Pointer 6
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10;
    void *ptr = &x;

    printf("%d", *ptr);  // Display output

    return 0;  // Indicate successful program termination
}
