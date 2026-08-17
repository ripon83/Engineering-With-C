/*
 * Program: Infinite Loop 6
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int i=0;
    start:
    switch(i) 
    {
        case 0: 
            printf("Start ");  // Display output
            goto start;    // Transfer control to the labeled statement
        case 1: 
            printf("End ");  // Display output
            break;  // Exit the nearest loop
    }
    return 0;  // Indicate successful program termination
}
