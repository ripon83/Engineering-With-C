/*
 * Program: Summary 10
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
   int n=1;
   if((n++==2)&&(n++==3))  // Test the specified condition
        printf("Equal and n=%d",n);  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Not equal and n=%d",n);  // Display output
    return 0;  // Indicate successful program termination
}
