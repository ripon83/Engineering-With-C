/*
 * Program: Null Pointer 2
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int *ptr = NULL;

    if (ptr == NULL)
        printf("Pointer does not point to an object.");  // Display output

    return 0;  // Indicate successful program termination
}
