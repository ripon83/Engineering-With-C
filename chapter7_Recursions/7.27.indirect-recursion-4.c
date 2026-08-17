/*
 * Program: Indirect Recursion 4
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

void B(int);  // Function call
void C(int);  // Function call

void A(int n)
{
    if(n>=1)
    {
        printf("%d\t", n);  // Display output
        B(n/2);  // Function call
    }
}

void B(int n)
{
    if(n>=1)
    {
        printf("%d\t", n);  // Display output
        C(n/4);  // Function call
    }
}

void C(int n)
{
    if(n>=1)
    {
        printf("%d\t", n);  // Display output
        A(n/8);  // Function call
    }
}

int main()  // Main function: execution starts here
{
    A(1024);  // Function call
}
