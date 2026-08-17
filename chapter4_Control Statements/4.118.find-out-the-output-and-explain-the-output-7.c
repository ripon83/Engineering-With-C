/*
 * Program: Find Out The Output And Explain The Output 7
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int m = 1;
    if (m == 1 || ++m)  // Test the specified condition
        printf("%d", m);  // Display output
    return 0;  // Indicate successful program termination
}
