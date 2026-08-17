/*
 * Program: Summary 21
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
#define largest(w,x,y,z){\
    if(w>x&&w>y&&w>z)\  // Test the specified condition
        printf("%d is the largest\n",w);\  // Display output
    else if(x>y&&x>z)\  // Test the next alternative condition
        printf("%d is the largest\n",x);\  // Display output
    else if(y>z)\  // Test the next alternative condition
        printf("%d is the largest\n",y);\  // Display output
    else\
        printf("%d is the largest\n",z);\  // Display output
}
int main()  // Main function: program execution starts here
{
    largest(150,130,120,100);
    largest(50,130,20,100);
    largest(510,130,2010,1000);
    largest(50,130,120,100);
    return 0;  // Indicate successful program termination
}
