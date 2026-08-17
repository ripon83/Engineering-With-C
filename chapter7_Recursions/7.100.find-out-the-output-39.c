/*
 * Program: Find Out The Output 39
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int foo(int n)
{
    if(n>=5)
        return n;

    return foo(foo(n+1) + foo(n+2));
}
int main()  // Main function: execution starts here
{
    printf("%d", foo(1));  // Display output
    return 0;  // Indicate successful program termination
}
