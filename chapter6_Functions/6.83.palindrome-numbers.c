/*
 * Program: Palindrome Numbers
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int palindrome(int n)
{
    int tmp=n, r, rev=0;

    while(tmp)  // Repeat while the condition remains true
    {
        r=tmp%10;
        rev=rev*10+r;
        tmp=tmp/10;
    }

    if(rev==n)
        return 1;

    return 0;  // Indicate successful program termination
}

void palindromeSeries(int n)
{
    for(int i=1; i<n; i++)  // Repeat the required operation
    {
        if(palindrome(i))
            printf("%d\t", i);  // Display output
    }
}

int main()  // Main function: execution starts here
{
    int m=100;

    palindromeSeries(m);

    return 0;  // Indicate successful program termination
}
