/*
 * Program: Infinite While Loop 2
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i = 0;

    do  // Start a do-while loop
    {
        printf("%d\t", i++);  // Display output
    } while (1);

    return 0;  // Indicate successful program termination
}
