/*
 * Program: Converting A Float
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    float m=6.9;

    if(sizeof((double)m)==sizeof(6.9))  // Test the specified condition
        printf("Equal size and it is %zu\n",  // Display output
               sizeof((double)m));
    else  // Execute this branch when the preceding condition is false
        printf("Not equal");  // Display output

    return 0;  // Indicate successful program termination
}
