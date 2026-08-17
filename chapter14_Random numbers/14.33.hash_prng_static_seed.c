/*
 * Program 14.33: Version 2: Internalizing the Seed with static
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
unsigned int prng32()
{
    static unsigned int seed=0xab;
    unsigned int x=0, y=0, z=0, k=5, m=0x5bd1e995, n=0x71b18589;
    int i=0;
    // Repeat the required operation.
    while(i<k)
    {
        x=x^m;
        x+=(seed<<16)+(seed<<8)+(seed);
        y+=(x>>13)+(x>>15)+x;
        y=y*n;
        z^=x+y;
        seed=z;
        i++;
    }
    // Return the computed value or finish successfully.
    return z;
}
// Main function: execution starts here.
int main()
{
    for(int i=0; i<100; i++)
        // Display the result or prompt.
        printf("%u\t", prng32());
    return 0;
}
