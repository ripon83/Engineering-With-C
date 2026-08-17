/*
 * Program: A Non Zero Constant As A Loop Condition
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i;

    for (i = 1; -1; i++)  // Start or control a for loop
        ;

    printf("%d\t", i);  // Display output

    return 0;  // Indicate successful program termination
}
