/*
 * Program: Output Finding Questions 13
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
void foo(int a) 
{
    printf("%d", a);  // Display output
}
int main()   // Main function: execution starts here
{
    int i=1;
    foo(++i);
    return 0;  // Indicate successful program termination
}
