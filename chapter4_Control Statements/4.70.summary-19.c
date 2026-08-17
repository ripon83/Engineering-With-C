/*
 * Program: Summary 19
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
#define smallest(x,y,z){\
    if(x<y&&x<z)\  // Test the specified condition
        printf("%d is the smallest\n",x);\  // Display output
    else if(y<z)\  // Test the next alternative condition
        printf("%d is the smallest\n",y);\  // Display output
    else\
        printf("%d is the smallest\n",z);\  // Display output
}
int main()  // Main function: program execution starts here
{
    smallest(10,20,30);
    smallest(60,50,30);
    smallest(60,20,30);
    return 0;  // Indicate successful program termination
}
