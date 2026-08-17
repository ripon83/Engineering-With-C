/*
 * Program: Find Out The Error 6
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x=10, y=20;
    int * const p=&x;
    *p=&y;
    printf("%d",*p);  // Display output
    return 0;  // Indicate successful program termination
}
