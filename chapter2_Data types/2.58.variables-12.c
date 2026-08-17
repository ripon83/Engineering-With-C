/*
 * Program: Variables 12
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    register int m = 10;

    printf("m=%d and size=%ld",  // Display output
            m, sizeof(m));

    return 0;  // Indicate successful program termination
}
