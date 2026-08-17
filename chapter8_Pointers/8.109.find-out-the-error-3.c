/*
 * Program: Find Out The Error 3
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    float f = 3.14;
    int *p = (int *)&f; 
    printf("%d\n", *p);  // Display output
    return 0;  // Indicate successful program termination
}
