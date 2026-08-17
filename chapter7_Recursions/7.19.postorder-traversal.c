/*
 * Program: Postorder Traversal
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void foo(int n)
{
    if(n>=1)
    {
        foo(n-1);           // Left subtree
        foo(n-1);           // Right subtree
        printf("%d\t", n);  // Root
    }
}
int main()  // Main function: execution starts here
{
    foo(4);  // Function call
    return 0;  // Indicate successful program termination
}
