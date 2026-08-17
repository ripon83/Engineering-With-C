/*
 * Program: Summary 17
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
#define largest(x,y,z){\
    if(x>y&&x>z)\  // Test the specified condition
        printf("%d is the largest\n",x);\  // Display output
    else if(y>z)\  // Test the next alternative condition
        printf("%d is the largest\n",y);\  // Display output
    else\
        printf("%d is the largest\n",z);\  // Display output
}
int main()  // Main function: program execution starts here
{
    largest(10,20,30);
    largest(10,50,30);
    largest(60,50,30);
    return 0;  // Indicate successful program termination
}
