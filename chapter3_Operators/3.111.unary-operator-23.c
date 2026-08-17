/*
 * Program: Unary Operator 23
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int m=1;
    int n=++m + m++ + m++;
    printf("m=%d n=%d\n", m, n);  // Display output
    return 0;  // Indicate successful program termination
}
