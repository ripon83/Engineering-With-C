/*
 * Program: Find Out The Output 35
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int foo(int n)
{
    if(n<=1)
        return n;

    return foo(n-1) + foo(n-2);
}
int main()  // Main function: execution starts here
{
    for(int i=0; i<7; i++)  // Repeat the required operation
        printf("%d ", foo(i));  // Display output

    return 0;  // Indicate successful program termination
}
