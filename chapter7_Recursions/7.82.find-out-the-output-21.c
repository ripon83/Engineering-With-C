/*
 * Program: Find Out The Output 21
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int foo(int n)
{
    if(n<=1)
        return 1;

    return n * foo(n-1);
}
int main()  // Main function: execution starts here
{
    printf("%d", foo(5));  // Display output
    return 0;  // Indicate successful program termination
}
