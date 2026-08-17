/*
 * Program: Case 3 No Parameters But Returns A Value
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int getNumber()
{
    return 100;
}

int main()  // Main function: execution starts here
{
    printf("%d", getNumber());  // Display output
    return 0;  // Indicate successful program termination
}
