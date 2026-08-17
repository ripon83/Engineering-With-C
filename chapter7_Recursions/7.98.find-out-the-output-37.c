/*
 * Program: Find Out The Output 37
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void B(int n);  // Function call

void A(int n)
{
    if(n>0)
    {
        printf("%d ", n);  // Display output
        B(n-1);  // Function call
    }
}

void B(int n)
{
    if(n>0)
    {
        printf("%d ", n);  // Display output
        A(n/2);  // Function call
    }
}

int main()  // Main function: execution starts here
{
    A(10);  // Function call
    return 0;  // Indicate successful program termination
}
