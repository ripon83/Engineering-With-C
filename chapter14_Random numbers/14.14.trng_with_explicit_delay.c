/*
 * Program 14.14: Fixing Windows Behavior with an Explicit Delay
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <time.h>
short trng16()
{
    short i=0, t, b, n=16, r=0;
    // Repeat the required operation.
    while(i<n)
    {
        t=clock();
        b=t&1;
        r=r+b*(1<<i);
        i++;
        for (int j=0; j<10000000; j++);
    }
    // Return the computed value or finish successfully.
    return r;
}
// Main function: execution starts here.
int main()
{
    // Display the result or prompt.
    printf("%hi", trng16());
    return 0;
}
