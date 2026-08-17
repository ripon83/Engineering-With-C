/*
 * Program: Infinite Loop 3
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int i=0;
    while(i<5)   // Check or control a while loop
    {
        printf("%d ", i);  // Display output
        i=i++;
    }
}
