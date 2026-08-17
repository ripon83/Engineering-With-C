/*
 * Program: Example 2 Using Extern Between Two Source Files
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

extern int balance;

int main()  // Main function: program execution starts here
{
    printf("%d", balance);  // Display output
    return 0;  // Indicate successful program termination
}
