/*
 * Program: Find Out The Output 43
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int foo(int n)
{
    if(n<=0)
        return 0;  // Indicate successful program termination

    printf("%d ", n);  // Display output
    return foo(n/2);
}
int main()  // Main function: execution starts here
{
    foo(20);  // Function call
    return 0;  // Indicate successful program termination
}
