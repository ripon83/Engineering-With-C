/*
 * Program: Find Out The Errors 6
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n=0x9ab;
    n=((n&0xAAAAAAAA)>>1)
      |((n&0x55555555)<<1);
    printf("%x\n",n);  // Display output
    return 0;  // Indicate successful program termination
}
