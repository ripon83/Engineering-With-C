/*
 * Program: Find Out The Output 2
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void foo(int n)
{
    if(n>0)
    {
        foo(n-1);  // Function call
        foo(n-1);  // Function call
        printf("%d\t", n);  // Display output
    }
}
int main()  // Main function: execution starts here
{
    foo(4);  // Function call
    return 0;  // Indicate successful program termination
}
