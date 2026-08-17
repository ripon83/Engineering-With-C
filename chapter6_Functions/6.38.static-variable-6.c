/*
 * Program: Static Variable 6
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
int sum(int i)
{
    int csum=0;
    csum=csum+i;
    return csum;
}
int main()  // Main function: execution starts here
{
    int i, j, n=10;
    for(i=1; i<=n; i++)  // Repeat the required operation
    {
        j=sum(i);
        printf("%d\t", j);  // Display output
    }
    return 0;  // Indicate successful program termination
}
