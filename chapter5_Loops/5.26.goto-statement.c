/*
 * Program: Goto Statement
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
#include <stdlib.h>

int main()  // Main function: execution starts here
{
    int n = rand();

    if (n % 2 == 0)
        goto even;  // Transfer control to the labeled statement
    else
        goto odd;  // Transfer control to the labeled statement

odd:
    printf("%d is an odd number\n", n);  // Display output

even:
    printf("%d is an even number\n", n);  // Display output

rest:
    printf("Rest statement to be executed\n");  // Display output

    return 0;  // Indicate successful program termination
}
