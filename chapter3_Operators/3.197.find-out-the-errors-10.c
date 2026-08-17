/*
 * Program: Find Out The Errors 10
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int year=2024;
    (year%4=0)?printf("Leap year\n"):
                printf("Not a leap year\n");  // Display output
    return 0;  // Indicate successful program termination
}
