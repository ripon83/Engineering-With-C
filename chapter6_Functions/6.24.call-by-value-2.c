/*
 * Program: Call By Value 2
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void swap(int m, int n)
{
    printf("Swap function: m=%p\tn=%p\n",  // Display output
           (void *)&m, (void *)&n);
}

int main()  // Main function: execution starts here
{
    int m=10, n=20;

    swap(m, n);

    printf("Main function: m=%p\tn=%p\n",  // Display output
           (void *)&m, (void *)&n);

    return 0;  // Indicate successful program termination
}
