/*
 * Program: Infinite Loop Caused By An Incorrect Update
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i = 0;

    for (i = 0; i < 10; i = i * 2)  // Start or control a for loop
    {
        printf("%d\t", i);  // Display output
    }

    return 0;  // Indicate successful program termination
}
