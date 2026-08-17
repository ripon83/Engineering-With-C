/*
 * Program: Find Out The Output 6
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
unsigned int foo(unsigned int n, unsigned int r)
{
    if(n>0)
        return (n%r) + foo(n/r, r);
    else
        return 0;  // Indicate successful program termination
}
int main()  // Main function: execution starts here
{
    printf("%u", foo(345, 10));  // Display output
}
