/*
 * Program: Find Out The Outputs 6
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int m=6;
    int n=m-- + m-- + m-- + m--;
    printf("m=%d  n=%d",m,n);  // Display output
    return 0;  // Indicate successful program termination
}
