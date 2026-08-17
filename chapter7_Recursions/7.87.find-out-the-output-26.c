/*
 * Program: Find Out The Output 26
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int foo(int n)
{
    static int x = 1;

    if(n<=0)
        return 0;  // Indicate successful program termination

    x = x * 2;

    return foo(n-1) + x;
}
int main()  // Main function: execution starts here
{
    printf("%d", foo(4));  // Display output
    return 0;  // Indicate successful program termination
}
