/*
 * Program: Static Variable 7
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
int foo()
{
    static int m=0;
    return m++;
}
int main()  // Main function: execution starts here
{
    printf("%d\t", foo());  // Display output
    printf("%d\t", foo());  // Display output
    printf("%d\t", foo());  // Display output
    return 0;  // Indicate successful program termination
}
