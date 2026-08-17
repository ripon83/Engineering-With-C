/*
 * Program 14.35: Version 4: Making the Seed Unpredictable — prng32_sh()
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <x86intrin.h>
unsigned int prng32_sh(unsigned int seed)
{
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
    unsigned  int n;
    unsigned long int seed=(unsigned long int)&n;
    seed=seed^__rdtsc();
    for(int i=0; i<100; i++)
    {
        n=prng32_sh(seed);
        // Display the result or prompt.
        printf("%u\t", n);
        seed=n;
    }
    return 0;
}
