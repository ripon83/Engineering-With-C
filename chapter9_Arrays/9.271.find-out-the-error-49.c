/*
 * Program: Find Out The Error 49
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#define setBit(n,p) (n|(1<<p))

int main()  // Main function: execution starts here
{
    int n=0;
    n=setBit(n, -1);
    printf("%d", n);  // Display output
    return 0;  // Indicate successful program termination
}
