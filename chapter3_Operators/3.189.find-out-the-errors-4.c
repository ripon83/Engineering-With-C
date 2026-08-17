/*
 * Program: Find Out The Errors 4
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n=10;
    if(n&1)
        printf("Odd\n");  // Display output
    else
        printf("Even\n");  // Display output
    return 0;  // Indicate successful program termination
}
