/*
 * Program: Preorder Traversal
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void foo(int n)
{
    if(n>=1)
    {
        printf("%d\t", n);   // root
        foo(n-1);            // left subtree
        foo(n-1);            // right subtree
    }
}
int main()  // Main function: execution starts here
{
    foo(4);  // Function call
    return 0;  // Indicate successful program termination
}
