/*
 * Program: Variables 17
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    register int i;

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", i);  // Display output
    }

    return 0;  // Indicate successful program termination
}
