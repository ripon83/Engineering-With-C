/*
 * Program: Case 4 One Or More Parameters And Returns A Value
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int polynomial(int x, int a, int b, int c)
{
    return a*x*x+b*x+c;
}

int main()  // Main function: execution starts here
{
    printf("%d\n", polynomial(2,1,3,2));  // Display output
    printf("%d\n", polynomial(5,1,2,3));  // Display output
    printf("%d\n", polynomial(4,4,3,2));  // Display output
    return 0;  // Indicate successful program termination
}
