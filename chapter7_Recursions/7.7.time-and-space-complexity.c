/*
 * Program: Time And Space Complexity
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

void foo(int n)
{
    if(n >= 1)
    {
        foo(n - 1);  // Function call

        for(int i = 1; i <= n; i++)  // Repeat the required operation
            printf("%d\t", i);  // Display output

        printf("\n");  // Display output
    }
}

int main()  // Main function: execution starts here
{
    foo(4);  // Function call
    return 0;  // Indicate successful program termination
}
