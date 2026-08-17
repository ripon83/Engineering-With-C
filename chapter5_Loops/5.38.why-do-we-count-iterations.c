/*
 * Program: Why Do We Count Iterations
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
#include <stdlib.h>

int main()  // Main function: execution starts here
{
    long i, j, counter = 0, m, n;

    m = rand();
    n = rand();

    for(i = 0; i < m; i++)             // O(m)
        for(j = 0; j < n; j++)         // O(n)
            counter++;

    printf("The body of the loops is executed %ld times\n", counter);  // Display output

    return 0;  // Indicate successful program termination
}
