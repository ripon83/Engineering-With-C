/*
 * Program: Find Out The Output 14
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int foo(int n)
{
    static int counter = 0;

    counter++;

    if(n<=0)
        return counter;

    return foo(n-1) + foo(n-1);
}
int main()  // Main function: execution starts here
{
    printf("%d", foo(3));  // Display output
    return 0;  // Indicate successful program termination
}
