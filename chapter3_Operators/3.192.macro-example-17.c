/*
 * Program: Macro Example 17
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#define swap(n) n<<16|n>>16  // Define a macro
int main()  // Main function: program execution starts here
{
    int n=0x9ab;
    n=swap(n);
    printf("%x\n",n);  // Display output
    return 0;  // Indicate successful program termination
}
