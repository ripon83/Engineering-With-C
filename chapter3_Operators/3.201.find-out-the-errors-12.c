/*
 * Program: Find Out The Errors 12
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    unsigned int n=1;
    unsigned int r=5;
    unsigned int result=(n<<r)|(n>>(32-r));
    printf("%u\n",result);  // Display output
    return 0;  // Indicate successful program termination
}
