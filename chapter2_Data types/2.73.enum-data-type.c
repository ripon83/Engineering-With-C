/*
 * Program: Enum Data Type
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    enum numbers {zero, one, two, three, four};

    printf("%d %d %d %d %d",  // Display output
           zero, one, two, three, four);

    return 0;  // Indicate successful program termination
}
