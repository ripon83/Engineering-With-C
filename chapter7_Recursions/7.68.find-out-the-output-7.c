/*
 * Program: Find Out The Output 7
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int foo(int x, int y)
{
    if(y==0)
        return 0;  // Indicate successful program termination

    if(y%2==0)
        return foo(x+x, y/2);

    return foo(x+x, y/2) + x;
}
int main()  // Main function: execution starts here
{
    printf("%d", foo(4, 5));  // Display output
    return 0;  // Indicate successful program termination
}
