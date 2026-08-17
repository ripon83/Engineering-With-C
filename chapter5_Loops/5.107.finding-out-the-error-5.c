/*
 * Program: Finding Out The Error 5
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int i, n=100;
    for(i=1; i!=n; i=i+2)   // Start or control a for loop
    {
        printf("%d\t", i);  // Display output
    }
}
