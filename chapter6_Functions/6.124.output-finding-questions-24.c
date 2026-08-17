/*
 * Program: Output Finding Questions 24
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
int main()   // Main function: execution starts here
{  
    int foo(int m, int n)
    {
        return m+n;
    }
    printf("%d", foo(2, 3));  // Display output
    return 0;    // Indicate successful program termination
}
