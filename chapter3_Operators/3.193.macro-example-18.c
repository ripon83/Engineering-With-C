/*
 * Program: Macro Example 18
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#define check(x) do {  // Define a macro
    (x&1)?printf("Odd\n"):printf("Even\n");
} while(0)
int main()  // Main function: program execution starts here
{
    check(15);
    return 0;  // Indicate successful program termination
}
