/*
 * Program: Find Out The Error 7
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x=10;
    const int *p=&x;
    *p=20;
    printf("%d",*p);  // Display output
    return 0;  // Indicate successful program termination
}
