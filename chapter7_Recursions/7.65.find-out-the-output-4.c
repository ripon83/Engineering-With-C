/*
 * Program: Find Out The Output 4
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int f(int n, int k)
{
    if(n==0)
        return 0;  // Indicate successful program termination
    else if(n%2)
        return f(n/2, 2*k) + k;
    else
        return f(n/2, 2*k) - k;
}
int main()  // Main function: execution starts here
{
    printf("%d", f(20, 1));  // Display output
    return 0;  // Indicate successful program termination
}
