/*
 * Program: Function Pointers With Return Values
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int add(int m,int n)
{
    return m+n;
}

int sub(int m,int n)
{
    return m-n;
}

int mult(int m,int n)
{
    return m*n;
}

int main()  // Main function: execution starts here
{
    int (*fp[])(int,int)={add,sub,mult};

    int x=fp[0](20,30);
    int y=fp[1](20,30);
    int z=fp[2](20,30);

    printf("The addition is: %d\n",x);  // Display output
    printf("The subtraction is: %d\n",y);  // Display output
    printf("The multiplication is: %d\n",z);  // Display output

    return 0;  // Indicate successful program termination
}
