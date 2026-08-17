/*
 * Program: Find Out The Errors 5
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n=10;
    n=n<<32;
    printf("%d\n",n);  // Display output
    return 0;  // Indicate successful program termination
}
