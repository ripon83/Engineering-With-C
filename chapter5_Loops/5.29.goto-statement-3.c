/*
 * Program: Goto Statement 3
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i = 0, n = 10;

here:
    printf("%d\t", i++);  // Display output

    if (i < n)
        goto here;  // Transfer control to the labeled statement

    return 0;  // Indicate successful program termination
}
