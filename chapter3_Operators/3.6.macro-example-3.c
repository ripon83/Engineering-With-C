/*
 * Program: Macro Example 3
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#define f(x) (x*x)  // Define a macro

int main()  // Main function: program execution starts here
{
    int m = 36/f(6);
    printf("m=%d", m);  // Display output
    return 0;  // Indicate successful program termination
}
