/*
 * Program: Largest Number Function
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int largest(int w, int x, int y, int z)
{
    if(w>x && w>y && w>z)
        return w;
    else if(x>y && x>z)
        return x;
    else if(y>z)
        return y;
    else
        return z;
}

int main()  // Main function: execution starts here
{
    printf("The largest number is %d\n",  // Display output
            largest(1,2,3,4));

    printf("The largest number is %d\n",  // Display output
            largest(9,8,7,6));

    printf("The largest number is %d\n",  // Display output
            largest(10,20,50,30));

    return 0;  // Indicate successful program termination
}
