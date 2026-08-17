/*
 * Program: Find Out The Errors 11
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int x=10,y=20;
    int z=(x>y&&x>10)?x:(y);
    printf("%d\n",z);  // Display output
    return 0;  // Indicate successful program termination
}
