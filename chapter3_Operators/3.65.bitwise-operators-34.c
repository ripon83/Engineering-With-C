/*
 * Program: Bitwise Operators 34
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int m = 28, k = 0;
    m = m | (1 << k);

    printf("m = %d\n", m);  // Display output
    return 0;  // Indicate successful program termination
}
