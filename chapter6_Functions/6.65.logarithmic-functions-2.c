/*
 * Program: Logarithmic Functions 2
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

#define logn(n,b) (log2(n)/log2(b))

int main()  // Main function: execution starts here
{
    int n=1024;

    printf("log3(%d) = %lf\n", n, logn(n,3));  // Display output
    printf("log4(%d) = %lf\n", n, logn(n,4));  // Display output
    printf("log5(%d) = %lf\n", n, logn(n,5));  // Display output
    printf("log6(%d) = %lf\n", n, logn(n,6));  // Display output

    return 0;  // Indicate successful program termination
}
