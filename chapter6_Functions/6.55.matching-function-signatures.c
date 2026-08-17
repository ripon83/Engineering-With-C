/*
 * Program: Matching Function Signatures
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

double divide(int m,int n)
{
    return (double)m/n;
}

int main()  // Main function: execution starts here
{
    int (*fp[])(int,int)={add,sub,divide};

    return 0;  // Indicate successful program termination
}
