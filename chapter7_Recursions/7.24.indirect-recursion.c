/*
 * Program: Indirect Recursion
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void foo2(int);  // Function call

void foo1(int n)
{
    if(n<=10)
    {
        printf("%d\t", n);  // Display output
        n++;
        foo2(n);  // Function call
    }
}

void foo2(int n)
{
    if(n<=10)
    {
        printf("%d\t", n);  // Display output
        n++;
        foo1(n);  // Function call
    }
}

int main()  // Main function: execution starts here
{
    foo1(1);  // Function call
}
