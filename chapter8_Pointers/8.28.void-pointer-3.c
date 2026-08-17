/*
 * Program: Void Pointer 3
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int comparator(const void *x, const void *y)
{
    return *(int *)x - *(int *)y;
}

int main()  // Main function: execution starts here
{
    int m = 20, n = 10;

    if (comparator(&m, &n) == 0)
        printf("Equal\n");  // Display output
    else if (comparator(&m, &n) > 0)
        printf("Greater\n");  // Display output
    else
        printf("Smaller\n");  // Display output

    return 0;  // Indicate successful program termination
}
