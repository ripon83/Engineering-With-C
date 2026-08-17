/*
 * Program: Macro Example 19
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#define setbit(n,k) n | 1 << k  // Define a macro
int main()  // Main function: program execution starts here
{
    int n=8;
    n=setbit(n,2);
    printf("%d\n",n);  // Display output
    return 0;  // Indicate successful program termination
}
