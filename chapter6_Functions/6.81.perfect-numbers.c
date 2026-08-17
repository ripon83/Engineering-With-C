/*
 * Program: Perfect Numbers
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int perfect(int n)
{
    int sum=0;

    for(int i=1; i<=n/2; i++)  // Repeat the required operation
    {
        if(n%i==0)
            sum=sum+i;
    }

    if(sum==n)
        return 1;

    return 0;  // Indicate successful program termination
}

void perfectSeries(int n)
{
    for(int i=1; i<=n; i++)  // Repeat the required operation
        if(perfect(i))
            printf("%d\t", i);  // Display output
}

int main()  // Main function: execution starts here
{
    perfectSeries(10000);
    return 0;  // Indicate successful program termination
}
