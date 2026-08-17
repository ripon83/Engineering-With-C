/*
 * Program: Output Finding Questions 16
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
void foo(int a, int b) 
{
    printf("%d %d", a, b);  // Display output
}
int main()   // Main function: execution starts here
{
    int i=1;
    foo(++i, i++);
    return 0;  // Indicate successful program termination
}
