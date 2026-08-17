/*
 * Program: Function Definition 2
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void largest(int w, int x, int y, int z)
{
    if(w>x && w>y && w>z)
        printf("%d is the largest\n", w);  // Display output
    else if(x>y && x>z)
        printf("%d is the largest\n", x);  // Display output
    else if(y>z)
        printf("%d is the largest\n", y);  // Display output
    else
        printf("%d is the largest\n", z);  // Display output
}

int main()  // Main function: execution starts here
{
    largest(1,2,3,4);
    largest(9,8,7,6);
    largest(10,20,50,30);
    return 0;  // Indicate successful program termination
}
