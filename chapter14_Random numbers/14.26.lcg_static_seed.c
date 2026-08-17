/*
 * Program 14.26: Version 3: Fixing Persistence with static
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
int prng()
{
    static int xn=7, xn1, a=3, c=5, m=11;
    xn1=(a*xn+c) % m;
    xn=xn1;
    // Return the computed value or finish successfully.
    return xn1;
}
// Main function: execution starts here.
int main()
{
    // Repeat the required operation.
    for(int i=0; i<10; i++)
        // Display the result or prompt.
        printf("%d\t", prng());
    return 0;
}
