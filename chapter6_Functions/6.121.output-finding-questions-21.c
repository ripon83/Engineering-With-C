/*
 * Program: Output Finding Questions 21
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
void foo(int a, int b, int c) 
{
    printf("%d %d %d", a, b, c);  // Display output
}
int main()   // Main function: execution starts here
{
    int i=1;
    foo(i++, ++i, i++);
    return 0;  // Indicate successful program termination
}
