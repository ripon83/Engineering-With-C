/*
 * Program: Sizeof Operator 2
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    printf("%zu\n", sizeof int);   // Error
    printf("%zu\n", sizeof(int));  // Correct
    return 0;  // Indicate successful program termination
}
