/*
 * Program: Summary 23
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
#define smallest(w,x,y,z){\
    if(w<x&&w<y&&w<z)\  // Test the specified condition
        printf("%d is the smallest\n",w);\  // Display output
    else if(x<y&&x<z)\  // Test the next alternative condition
        printf("%d is the smallest\n",x);\  // Display output
    else if(y<z)\  // Test the next alternative condition
        printf("%d is the smallest\n",y);\  // Display output
    else\
        printf("%d is the smallest\n",z);\  // Display output
}
int main()  // Main function: program execution starts here
{
    smallest(150,130,120,100);
    smallest(50,130,20,100);
    smallest(510,130,2010,1000);
    smallest(50,130,120,100);
    return 0;  // Indicate successful program termination
}
