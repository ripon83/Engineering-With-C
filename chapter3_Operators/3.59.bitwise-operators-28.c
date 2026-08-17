/*
 * Program: Bitwise Operators 28
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n=8;  // Any number
    int m=(n<<3)+n;  // Multiply by 9
    printf("%d multiplied by 9 is %d\n",n,m);  // Display output
    return 0;  // Indicate successful program termination
}
