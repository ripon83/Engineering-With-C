/*
 * Program: Find Out The Error 4
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
void foo()
{
    printf("Mysterious code");  // Display output
}
int main()  // Main function: execution starts here
{
    int (*fun)()=foo;
    fun();
    return 0;  // Indicate successful program termination
}
