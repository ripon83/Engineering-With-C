/*
 * Program: Pointer Arithmetic 2
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    printf("%p\n", (void *)(&(((int *)0)[1])));  // Display output
    return 0;  // Indicate successful program termination
}
