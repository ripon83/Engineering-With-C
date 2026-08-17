/*
 * Program: Find Out The Output Of The Following Program 21
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    for(int i=0; i<10; i++)   // Start or control a for loop
    {
        if(i==4) 
            goto exit;  // Transfer control to the labeled statement
        printf("%d\t", i);  // Display output
    }
    exit:
        printf("Outside the loop");  // Display output
}
