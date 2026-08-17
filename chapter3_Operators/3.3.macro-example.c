/*
 * Program: Macro Example
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#define f(x) x+x  // Define a macro

int main()  // Main function: program execution starts here
{
    int m = f(4)*f(4);
    printf("m=%d", m);  // Display output
    return 0;  // Indicate successful program termination
}
