/*
 * Program: Find Out The Output 13
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int ackermann(int m, int n)
{
    if(m==0)
        return n+1;

    if(n==0)
        return ackermann(m-1, 1);

    return ackermann(m-1, ackermann(m, n-1));
}
int main()  // Main function: execution starts here
{
    printf("%d", ackermann(3, 3));  // Display output
    return 0;  // Indicate successful program termination
}
