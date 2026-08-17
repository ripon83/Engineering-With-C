/*
 * Program: Summary 20
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int w=50,x=200,y=20,z=130;
    if(w>x&&w>x&&w>z)  // Test the specified condition
        printf("%d is the largest",w);  // Display output
    else if(x>y&&x>z)  // Test the next alternative condition
        printf("%d is the largest",x);  // Display output
    else if(y>z)  // Test the next alternative condition
        printf("%d is the largest",y);  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("%d is the largest",z);  // Display output
    return 0;  // Indicate successful program termination
}
