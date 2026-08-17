/*
 * Program: Armstrong Numbers
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

int Armstrong(int n)
{
    int temp=n, digit=0, rem, sum=0;

    while(temp)  // Repeat while the condition remains true
    {
        temp=temp/10;
        digit++;
    }

    temp=n;

    while(temp)  // Repeat while the condition remains true
    {
        rem=temp%10;
        sum+=pow(rem, digit);
        temp=temp/10;
    }

    if(n==sum)
        return 1;

    return 0;  // Indicate successful program termination
}

void ArmstrongSeries(int n)
{
    for(int i=1; i<=n; i++)  // Repeat the required operation
        if(Armstrong(i))
            printf("%d\t", i);  // Display output
}

int main()  // Main function: execution starts here
{
    ArmstrongSeries(10000);
    return 0;  // Indicate successful program termination
}
