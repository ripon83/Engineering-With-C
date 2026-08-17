/*
 * Program: Macro Example 15
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#define square(x) x*x  // Define a macro
int main()  // Main function: program execution starts here
{
    int n=square(2+3);
    printf("%d\n",n);  // Display output
    return 0;  // Indicate successful program termination
}
