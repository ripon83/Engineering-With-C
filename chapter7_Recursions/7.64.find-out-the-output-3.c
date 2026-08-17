/*
 * Program: Find Out The Output 3
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int fun(int n, int *p)
{
    int x, y;

    if(n<=2)
    {
        *p = 1;
        return 1;
    }

    x = fun(n-1, p);  // Function call
    y = x + *p;
    *p = x;

    return y;
}
int main()  // Main function: execution starts here
{
    int n = 15;
    printf("%d\n", fun(5, &n));  // Display output
    return 0;  // Indicate successful program termination
}
