/*
 * Program 14.17: Generating a Random Number Within a Custom Range
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
unsigned long trng64(long min, long max)
{
    unsigned long i=0, t, b, n=64, r=0;
    // Seed the pseudo-random number generator.
    srand(clock());
    // Repeat the required operation.
    while(i<n)
    {
        t=clock();
        b=t&1;
        r=r+b*(1L<<i);
        i++;
        // Generate a pseudo-random value.
        int tmp=rand()%7867;
        for (int j=0; j<tmp; j++);
    }
    // Return the computed value or finish successfully.
    return r%(max-min+1)+min;
}
// Main function: execution starts here.
int main()
{
    // Display the result or prompt.
    printf("%lu", trng64(10, 2000));
    return 0;
}
