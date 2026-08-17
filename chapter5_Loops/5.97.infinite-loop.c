/*
 * Program: Infinite Loop
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int i=0;
    while(i<5)  // Check or control a while loop
    {
        if(i==2)
            continue;  // Skip to the next iteration
        printf("%d ", i);  // Display output
        i++;
    }
}
