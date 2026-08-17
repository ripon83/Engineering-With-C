/*
 * Program 14.16: Bounding the Delay to a Reasonable Range
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
short trng16()
{
    short i=0, t, b, n=16, r=0;
    // Seed the pseudo-random number generator.
    srand(clock());
    // Repeat the required operation.
    while(i<n)
    {
        t=clock();
        b=t&1;
        r=r+b*(1<<i);
        i++;
        // Generate a pseudo-random value.
        int tmp=rand()%7867;
        for (int j=0; j<tmp; j++);
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
