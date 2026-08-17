/*
 * Program: Summary 5
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
   int n=1;
   if((n++==1)&&(n++==2))  // Test the specified condition
        printf("Equal");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Not equal");  // Display output
    return 0;  // Indicate successful program termination
}
