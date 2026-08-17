/*
 * Program: Semi Infinite Loop 2
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    unsigned char i = 1;

    for (i = 1; i > 0; i++)  // Start or control a for loop
        printf("%d\t", i);  // Display output

    printf("%d\n", i);  // Display output

    return 0;  // Indicate successful program termination
}
