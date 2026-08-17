/*
 * Program: Recursive Pattern 5
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void top(int n)
{
    int i, k=0;
    static int c=0;

    if(n>=1)
    {
        k=++c;
        top(n-1);  // Function call
    }

    for(i=k; i>1; i--)  // Repeat the required operation
        printf("\t");  // Display output

    for(i=1; i<=n; i++)  // Repeat the required operation
        printf("%d\t", i);  // Display output

    for(i=n-1; i>=1; i--)  // Repeat the required operation
        printf("%d\t", i);  // Display output

    printf("\n");  // Display output
}

int main()  // Main function: execution starts here
{
    top(5);  // Function call
    return 0;  // Indicate successful program termination
}
