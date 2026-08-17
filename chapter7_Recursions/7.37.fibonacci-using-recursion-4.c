/*
 * Program: Fibonacci Using Recursion 4
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

void multiply(long F[2][2], long M[2][2])
{
    long w=F[0][0] * M[0][0] + F[0][1] * M[1][0];
    long x=F[0][0] * M[0][1] + F[0][1] * M[1][1];
    long y=F[1][0] * M[0][0] + F[1][1] * M[1][0];
    long z=F[1][0] * M[0][1] + F[1][1] * M[1][1];

    F[0][0]=w;
    F[0][1]=x;
    F[1][0]=y;
    F[1][1]=z;
}

void power(long F[2][2], int n)
{
    if(n==0 || n==1)
        return;

    long M[2][2]={{1,1},{1,0}};

    power(F,n/2);  // Function call
    multiply(F,F);  // Function call

    if(n%2!=0)
        multiply(F,M);  // Function call
}

long fib(int n)
{
    long F[2][2]={{1,1},{1,0}};

    if(n==0)
        return 0;  // Indicate successful program termination

    power(F,n-1);  // Function call
    return F[0][0];
}

int main()  // Main function: execution starts here
{
    int n=92;

    for(int i=0; i<=n; i++)  // Repeat the required operation
        printf("%ld\t",fib(i));  // Display output

    return 0;  // Indicate successful program termination
}
