/*
 * Program: Palindrome Numbers
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

int reverse(int n)
{
    static int rev = 0;

    if(n == 0)
        return rev;
    else
    {
        rev = rev * 10 + n % 10;
        reverse(n / 10);  // Function call
    }
}

int isPal(int n)
{
    return n == reverse(n);
}

int main()  // Main function: execution starts here
{
    int m = 12321;

    if(isPal(m))
        printf("Palindrome number");  // Display output
    else
        printf("Not a palindrome");  // Display output

    return 0;  // Indicate successful program termination
}
