/*
 * Program: Output Finding Questions 23
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
void foo(int a, int b, int c, int d) 
{
    printf("%d %d %d %d", a, b, c, d);  // Display output
}
int main()   // Main function: execution starts here
{
    int i=1;
    foo(++i, i++, ++i, i++);
    return 0;  // Indicate successful program termination
}
