/*
 * Program: Find Out The Output 33
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int foo(int n)
{
    if(n<=0)
        return 0;  // Indicate successful program termination

    printf("%d ", n);  // Display output
    return foo(n-1);
}
int main()  // Main function: execution starts here
{
    foo(5);  // Function call
    return 0;  // Indicate successful program termination
}
