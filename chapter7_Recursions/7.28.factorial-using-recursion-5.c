/*
 * Program: Factorial Using Recursion 5
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int n=12;

    printf("%d", ({  // Display output
        int fact(int n)
        {
            if(n==0 || n==1)
                return 1;
            return n * fact(n-1);
        }

        fact(n);  // Function call
    }));

    return 0;  // Indicate successful program termination
}
