/*
 * Program: Find Out The Output 27
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int foo(int n)
{
    static int x = 0;

    if(n==0)
        return x;

    x++;

    return foo(n-1);
}
int main()  // Main function: execution starts here
{
    printf("%d", foo(5));  // Display output
    return 0;  // Indicate successful program termination
}
