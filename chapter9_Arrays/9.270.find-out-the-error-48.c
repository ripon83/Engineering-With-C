/*
 * Program: Find Out The Error 48
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#define getBit(n,p) ((n>>(p))&1)

int main()  // Main function: execution starts here
{
    int n=5;
    printf("%d", getBit(n, 40));  // Display output
    return 0;  // Indicate successful program termination
}
