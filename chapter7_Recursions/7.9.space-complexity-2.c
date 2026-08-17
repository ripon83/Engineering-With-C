/*
 * Program: Space Complexity 2
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

void pattern(int n)
{
    static int k = 1;
    int i;

    if(n > 0)
    {
        /* Increasing part */
        for(i = 1; i <= k; i++)  // Repeat the required operation
            printf("%d\t", i);  // Display output
        printf("\n");  // Display output

        k++;
        pattern(n - 1);  // Function call

        /* Decreasing part */
        k--;
        for(i = 1; i < k; i++)  // Repeat the required operation
            printf("%d\t", i);  // Display output
        printf("\n");  // Display output
    }
}

int main()  // Main function: execution starts here
{
    pattern(5);  // Function call
    return 0;  // Indicate successful program termination
}
