/*
 * Program: Largest Number Function 2
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int m=2, n=12;
    int l=({
        int largest(int m, int n)
        {
            if(m>n)
                return m;
            return n;
        }
        largest(m, n);
    });

    printf("The largest: %d", l);  // Display output
    return 0;  // Indicate successful program termination
}
