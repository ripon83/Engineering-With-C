/*
 * Program: Find Out The Error
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()   // Main function: execution starts here
{
    int *p=NULL;
    *p = 10;
    printf("%d\n", *p);  // Display output
    return 0;  // Indicate successful program termination
}
