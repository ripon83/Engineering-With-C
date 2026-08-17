/*
 * Program: Variables 13
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    register int m = 10;

    printf("m=%d and address=%p",  // Display output
            m, &m);

    return 0;  // Indicate successful program termination
}
