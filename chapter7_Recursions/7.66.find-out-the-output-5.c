/*
 * Program: Find Out The Output 5
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int f(int n)
{
    static int r = 0;

    if(n<=0)
        return 1;

    if(n>3)
    {
        r = n;
        return f(n-2) + 2;
    }

    return f(n-1) + r;
}
int main()  // Main function: execution starts here
{
    printf("%d", f(5));  // Display output
}
