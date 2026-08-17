/*
 * Program: Find Out The Output
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x = 10;
    const int *p = &x;
    p = p + 0;
    printf("%d\n", *p);  // Display output
    return 0;  // Indicate successful program termination
}
