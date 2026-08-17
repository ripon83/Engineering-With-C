/*
 * Program: Recursive Pattern 6
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void bottom(int n)
{
    int i, k=0;
    static int c=1;

    for(i=c++; i>=1; i--)  // Repeat the required operation
        printf("\t");  // Display output

    for(i=1; i<=n; i++)  // Repeat the required operation
        printf("%d\t", i);  // Display output

    for(i=n-1; i>=1; i--)  // Repeat the required operation
        printf("%d\t", i);  // Display output

    printf("\n");  // Display output

    if(n>=1)
        bottom(n-1);  // Function call
}

int main()  // Main function: execution starts here
{
    bottom(4);  // Function call
    return 0;  // Indicate successful program termination
}
