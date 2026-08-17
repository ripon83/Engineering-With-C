/*
 * Program: Summary 18
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int x=100,y=200,z=30;
    if(x<y&&x<z)  // Test the specified condition
        printf("%d is the smallest",x);  // Display output
    else if(y<z)  // Test the next alternative condition
        printf("%d is the smallest",y);  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("%d is the smallest",z);  // Display output
    return 0;  // Indicate successful program termination
}
