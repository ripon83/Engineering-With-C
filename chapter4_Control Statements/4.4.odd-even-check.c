/*
 * Program: Odd Even Check
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n = 23;

    if (n % 2 == 0)  // Test the specified condition
        printf("%d is an even number\n",n);  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("%d is an odd number\n", n);  // Display output

    return 0;  // Indicate successful program termination
}
