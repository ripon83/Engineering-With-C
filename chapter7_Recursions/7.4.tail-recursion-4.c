/*
 * Program: Tail Recursion 4
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void foo(int n)
{
    static int k=0;
    if(k<=n)
    {
        k++;
        for(int i=k; i>0; i--)  // Repeat the required operation
            printf("%d\t", i);  // Display output
        printf("\n");  // Display output
        foo(n);  // Function call
    }
}
int main()  // Main function: execution starts here
{
    foo(4);  // Function call
    return 0;  // Indicate successful program termination
}
