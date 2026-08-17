/*
 * Program: Variables 20
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    {
        static int m;

        printf("%d", m);  // Display output
    }

    printf("%d", m);  // Display output

    return 0;  // Indicate successful program termination
}
