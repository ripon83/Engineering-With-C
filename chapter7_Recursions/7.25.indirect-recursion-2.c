/*
 * Program: Indirect Recursion 2
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

int odd(int);  // Function call

int even(int n)
{
    if(n==0)
        return 0;  // Indicate successful program termination
    return odd(n-1);
}

int odd(int n)
{
    if(n<=-1)
        return -1;
    return even(n-1);
}

int main()  // Main function: execution starts here
{
    int n=5;
    int m=even(n);  // Function call

    if(m==0)
        printf("%d is an even number\n", n);  // Display output
    else
        printf("%d is an odd number\n", n);  // Display output
}
