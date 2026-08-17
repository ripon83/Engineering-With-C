/*
 * Program: Size Difference Between Boolean And Enum
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>
#include <stdbool.h>

int main()  // Main function: program execution starts here
{
    bool m=true;

    printf("%ld",  // Display output
           sizeof(m));

    return 0;  // Indicate successful program termination
}
