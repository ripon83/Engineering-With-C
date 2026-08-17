/*
 * Program: Passing The Reversed Number As An Argument
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

int reverse(int n, int rev)
{
    if(n == 0)
        return rev;

    return reverse(n / 10, rev * 10 + n % 10);
}

int isPal(int n)
{
    return n == reverse(n, 0);
}

int main()  // Main function: execution starts here
{
    int m = 1221;

    if(isPal(m))
        printf("Palindrome number");  // Display output
    else
        printf("Not a palindrome");  // Display output

    return 0;  // Indicate successful program termination
}
