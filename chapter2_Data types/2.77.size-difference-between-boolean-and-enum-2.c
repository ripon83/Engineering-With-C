/*
 * Program: Size Difference Between Boolean And Enum 2
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    enum Bool
    {
        false,true
    };

    enum Bool m=true;

    printf("%ld",  // Display output
           sizeof(m));

    return 0;  // Indicate successful program termination
}
