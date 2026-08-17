/*
 * Program: Find Out The Output 9
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int foo(int n)
{
    static int i = 1;

    if(n>=5)
        return n;

    n += i;
    i++;

    return foo(n);
}
int main()  // Main function: execution starts here
{
    printf("%d", foo(1));  // Display output
    return 0;  // Indicate successful program termination
}
