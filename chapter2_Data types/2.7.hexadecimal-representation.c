/*
 * Program: Hexadecimal Representation
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int n = -6;

    printf("%d in decimal representation is %d\n", n, n);  // Display output
    printf("%d in unsigned representation is %u\n", n, n);  // Display output
    printf("%d in hexadecimal representation is %x\n", n, n);  // Display output
    printf("%d in octal representation is %o\n", n, n);  // Display output

    return 0;  // Indicate successful program termination
}
