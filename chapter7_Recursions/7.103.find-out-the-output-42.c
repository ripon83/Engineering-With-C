/*
 * Program: Find Out The Output 42
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int log_int(int n)
{
    if(n<=1)
        return 0;  // Indicate successful program termination

    return 1 + log_int(n/2);
}
int main()  // Main function: execution starts here
{
    printf("%d", log_int(1025));  // Display output
    return 0;  // Indicate successful program termination
}
