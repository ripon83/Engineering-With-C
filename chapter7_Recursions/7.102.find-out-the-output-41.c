/*
 * Program: Find Out The Output 41
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int reverse(int n, int rev)
{
    if(n==0)
        return rev;

    return reverse(n/10, rev*10+n%10);
}
int main()  // Main function: execution starts here
{
    printf("%d", reverse(1234, 0));  // Display output
    return 0;  // Indicate successful program termination
}
