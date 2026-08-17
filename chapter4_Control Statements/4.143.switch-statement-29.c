/*
 * Program: Switch Statement 29
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n = 2;
    switch (n & 1)  // Select a branch based on the expression value
    {
        case 0:
            printf("Even");  // Display output
            break;  // Exit the current switch or loop
        case 1:
            printf("Odd");  // Display output
            break;  // Exit the current switch or loop
    }
    return 0;  // Indicate successful program termination
}
