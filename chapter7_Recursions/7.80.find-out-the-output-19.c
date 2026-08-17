/*
 * Program: Find Out The Output 19
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void foo(int n)
{
    if(n==0)
        return;

    printf("%d ", n);  // Display output
    foo(n-1);  // Function call
}
int main()  // Main function: execution starts here
{
    foo(5);  // Function call
    return 0;  // Indicate successful program termination
}
