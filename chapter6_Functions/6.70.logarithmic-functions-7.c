/*
 * Program: Logarithmic Functions 7
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

// C program to compute x/y up to n decimal places
#include <stdio.h>

void divide(int x, int y, int n)
{
    if(y==0)
    {
        printf("Infinite\n");  // Display output
        return;
    }

    if(x==0)
    {
        printf("0");  // Display output
        return;
    }

    if(n<=0)
    {
        printf("%d", x/y);  // Display output
        return;
    }

    if(((x>0)&&(y<0)) || ((x<0)&&(y>0)))
    {
        printf("-");  // Display output
        x=x>0 ? x : -x;
        y=y>0 ? y : -y;
    }

    int d=x/y;

    for(int i=0; i<=n; i++)  // Repeat the required operation
    {
        printf("%d", d);  // Display output

        x=x-(y*d);

        if(x==0)
            break;

        x=x*10;
        d=x/y;

        if(i==0)
            printf(".");  // Display output
    }
}

int main()  // Main function: execution starts here
{
    int x=22, y=7, n=90;

    divide(x, y, n);

    return 0;  // Indicate successful program termination
}
