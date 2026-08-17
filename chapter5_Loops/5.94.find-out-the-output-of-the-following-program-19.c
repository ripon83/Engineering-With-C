/*
 * Program: Find Out The Output Of The Following Program 19
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
#define COND (i<5)
int main()  // Main function: execution starts here
{
    int i=0;
    while(COND)   // Check or control a while loop
        printf("%d ", i++);  // Display output
}
