/*
 * Program: Tail Recursion 2
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void foo(int n)
{
    static int i = 0;

    if(i < n)
    {
        i++;
        printf("%d\t", i);  // Display output
        foo(n);             // tail-recursive call
    }
}
int main()  // Main function: execution starts here
{
    foo(4);  // Function call
    return 0;  // Indicate successful program termination
}
