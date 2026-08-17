/*
 * Program: Callback Functions
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

int add(int m, int n)
{
    return m+n;
}
int sub(int m, int n)
{
    return m-n;
}
int multiply(int m, int n)
{
    return m*n;
}
int power(int m, int n)
{
    return pow(m, n);
}

int ops(int m, int n,
        int (*operation)(int, int))
{
    return operation(m, n);
}

int main()  // Main function: execution starts here
{
    int m=20, n=2;

    printf("Add:%d\n", ops(m, n, add));  // Display output
    printf("Subtract:%d\n", ops(m, n, sub));  // Display output
    printf("Multiply:%d\n", ops(m, n, multiply));  // Display output
    printf("Power:%d\n", ops(m, n, power));  // Display output

    return 0;  // Indicate successful program termination
}
