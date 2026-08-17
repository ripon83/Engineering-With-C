/*
 * Program: Find Out The Output 40
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int gcd(int a, int b)
{
    if(b==0)
        return a;

    return gcd(b, a%b);
}
int main()  // Main function: execution starts here
{
    printf("%d", gcd(48, 18));  // Display output
    return 0;  // Indicate successful program termination
}
