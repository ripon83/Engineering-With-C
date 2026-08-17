/*
 * Program: Fibonacci Using Recursion 2
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int n=12;

    int fib = ({
        int fibonacci(int n)
        {
            if(n <= 1)
                return n;
            return fibonacci(n-1) + fibonacci(n-2);
        }

        fibonacci(n);  // Function call
    });

    printf("The Fibonacci number is %d", fib);  // Display output

    return 0;  // Indicate successful program termination
}
