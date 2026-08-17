/*
 * Program: Macro Example 20
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#define swap(n) ((n&0xf0f0f0f0)>>4 |  // Define a macro
                 (n&0x0f0f0f0f)<<4)
int main()  // Main function: program execution starts here
{
    int n=0x9ab;
    n=swap(n);
    printf("%x\n",n);  // Display output
    return 0;  // Indicate successful program termination
}
