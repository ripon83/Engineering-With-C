/*
 * Program: Why The Macro Cannot Directly Calculate The Size Of A Data T
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
#define size(x) ((char *)(&x + 1) - (char *)&x)

int main()  // Main function: execution starts here
{
    printf("The size of int is %zu\n", size(int));  // Display output
    printf("The size of double is %zu\n", size(double));  // Display output
    printf("The size of long double is %zu\n", size(long double));  // Display output

    return 0;  // Indicate successful program termination
}
