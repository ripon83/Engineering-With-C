/*
 * Program: Infinite Looping 2
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int n = 7;

odd:
    printf("Odd\t");  // Display output

even:
    printf("Even\t");  // Display output

    if (n & 1)
        goto odd;  // Transfer control to the labeled statement
    else
        goto even;  // Transfer control to the labeled statement

    return 0;  // Indicate successful program termination
}
