/*
 * Program: Logarithmic Recursion
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
long int log_int(int n)
{
    if(n<=1)
        return 0;  // Indicate successful program termination
    return 1+log_int(n/2);
}
int main()  // Main function: execution starts here
{
    int n=1025;
    printf("The log value in integer of %d is %ld", n, log_int(n));  // Display output
    return 0;  // Indicate successful program termination
}
