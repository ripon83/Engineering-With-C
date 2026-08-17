/*
 * Program: Power Using Recursion
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

int power(int x, int n)
{
    if(n==0)
        return 1;

    int tmp=power(x, n/2);  // Function call

    if(n%2==0)
        return tmp*tmp;
    else
        return x*tmp*tmp;
}

int main()  // Main function: execution starts here
{
    printf("%d", power(2, 10));  // Display output
    return 0;  // Indicate successful program termination
}
