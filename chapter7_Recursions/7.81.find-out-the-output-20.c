/*
 * Program: Find Out The Output 20
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void foo(int n)
{
    if(n<=0)
        return;

    printf("%d ", n);  // Display output
    foo(n-2);  // Function call
    printf("%d ", n);  // Display output
}
int main()  // Main function: execution starts here
{
    foo(6);  // Function call
    return 0;  // Indicate successful program termination
}
