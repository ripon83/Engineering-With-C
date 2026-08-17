/*
 * Program: Find Out The Output 2
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x = 10, y = 20;
    int *const p = &x;
    *p = y;
    printf("%d %d\n", x, y);  // Display output
    return 0;  // Indicate successful program termination
}
