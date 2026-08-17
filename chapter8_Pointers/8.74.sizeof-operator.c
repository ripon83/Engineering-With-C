/*
 * Program: Sizeof Operator
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int m;
    printf("%zu\n", sizeof m);  // Display output
    printf("%zu\n", sizeof(m));  // Display output
    return 0;  // Indicate successful program termination
}
