/*
 * Program: Properties Of The Sizeof 4
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int n;

    printf("Enter the value of n: ");  // Display output
    scanf("%d", &n);  // Read input

    int a[n];

    printf("The size of the array is: %zu\n", sizeof(a));  // Display output

    return 0;  // Indicate successful program termination
}
