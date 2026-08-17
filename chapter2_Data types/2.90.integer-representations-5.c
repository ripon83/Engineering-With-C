/*
 * Program: Integer Representations 5
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n=0xffffffff;

    printf("%d\n",n);  // Display output
    printf("%u\n",n);  // Display output
    printf("%x\n",n);  // Display output

    return 0;  // Indicate successful program termination
}
