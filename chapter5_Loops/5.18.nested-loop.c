/*
 * Program: Nested Loop
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i, n = 4, count = 0;

    for (i = 0; i < n; i++)  // Start or control a for loop
    {
        count++;
        printf("%d\t", count);  // Display output
    }
    printf("\n");  // Display output

    for (i = 0; i < n; i++)  // Start or control a for loop
    {
        count++;
        printf("%d\t", count);  // Display output
    }
    printf("\n");  // Display output

    for (i = 0; i < n; i++)  // Start or control a for loop
    {
        count++;
        printf("%d\t", count);  // Display output
    }

    return 0;  // Indicate successful program termination
}
