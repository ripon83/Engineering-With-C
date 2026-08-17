/*
 * Program: Anonymous Functions
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int m=2, n=12;
    printf("%d", ({  // Display output
        int mult(int m, int n)
        {
            return m*n;
        }
        mult(m, n);
    }));
    return 0;  // Indicate successful program termination
}
