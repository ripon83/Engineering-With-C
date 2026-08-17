/*
 * Program: Static Variable 12
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
int foo()
{
    static int m=0;
    return m++;
}
int main()  // Main function: execution starts here
{
    int n=100;
    for(foo(); foo()<=n; foo())  // Repeat the required operation
        printf("%d\t", foo());  // Display output
}
