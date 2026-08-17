/*
 * Program: Time And Space Complexity 2
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

void pattern(int n)
{
    int i;

    if(n > 0)
    {
        for(i = 1; i <= n; i++)  // Repeat the required operation
            printf("%d\t", i);  // Display output

        printf("\n");  // Display output

        pattern(n - 1);  // Function call

        for(i = 1; i <= n; i++)  // Repeat the required operation
            printf("%d\t", i);  // Display output

        printf("\n");  // Display output
    }
}

int main()  // Main function: execution starts here
{
    pattern(5);  // Function call
    return 0;  // Indicate successful program termination
}
