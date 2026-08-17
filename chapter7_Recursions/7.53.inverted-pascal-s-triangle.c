/*
 * Program: Inverted Pascal S Triangle
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void pascal_bottom(int n)
{
    static int counter=1;

    for(int j=0; j<=counter; j++)   // Repeat the required operation
        printf(" ");   // Display output

    counter++;

    int c=1; // coefficient

    for(int j=1; j<=n; j++)   // Repeat the required operation
    {
        printf("%d ", c);  // Display output
        c=c*(n-j)/j;
    }

    printf("\n");  // Display output

    if(n>0)
        pascal_bottom(n-1);  // Function call
}

int main()  // Main function: execution starts here
{
    pascal_bottom(5);  // Function call
    return 0;  // Indicate successful program termination
}
