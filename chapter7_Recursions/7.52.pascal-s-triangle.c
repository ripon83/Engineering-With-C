/*
 * Program: Pascal S Triangle
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void pascal_top(int n)
{
    int i=0;
    static int counter=0;

    if(n>0)
    {
        i=++counter;
        pascal_top(n-1);  // Function call
    }

    for(int j=0; j<i; j++)   // Repeat the required operation
        printf(" ");   // Display output

    int c=1; 

    for(int j=1; j<=n; j++)   // Repeat the required operation
    {
        printf("%d ", c);  // Display output
        c=c*(n-j)/j;
    }

    printf("\n");  // Display output
}

int main()  // Main function: execution starts here
{
    pascal_top(5);  // Function call
    return 0;  // Indicate successful program termination
}
