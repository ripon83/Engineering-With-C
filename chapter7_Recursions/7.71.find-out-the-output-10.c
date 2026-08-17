/*
 * Program: Find Out The Output 10
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void fooB(int n);  // Function call

void fooA(int n)
{
    if(n>0)
    {
        printf("%d ", n);  // Display output
        fooB(n-1);  // Function call
    }
}

void fooB(int n)
{
    if(n>1)
    {
        printf("%d ", n);  // Display output
        fooA(n/2);  // Function call
    }
}

int main()  // Main function: execution starts here
{
    fooA(20);  // Function call
    return 0;  // Indicate successful program termination
}
