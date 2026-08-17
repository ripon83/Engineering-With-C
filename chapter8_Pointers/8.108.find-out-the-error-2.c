/*
 * Program: Find Out The Error 2
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()   // Main function: execution starts here
{
    int x=10;
    int *p=&x;
    p++;
    printf("%d\n", *p);  // Display output
    return 0;  // Indicate successful program termination
}
