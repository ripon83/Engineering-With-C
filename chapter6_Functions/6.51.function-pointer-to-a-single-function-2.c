/*
 * Program: Function Pointer To A Single Function 2
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void add(int m,int n)
{
    printf("The addition is: %d\n",m+n);  // Display output
}

void sub(int m,int n)
{
    printf("The subtraction is: %d\n",m-n);  // Display output
}

void mult(int m,int n)
{
    printf("The multiplication is: %d\n",m*n);  // Display output
}

int main()  // Main function: execution starts here
{
    void (*fp)(int,int);

    fp=add;
    fp(20,10);

    fp=sub;
    fp(20,10);

    fp=mult;
    fp(20,10);

    return 0;  // Indicate successful program termination
}
