/*
 * Program 14.34: Version 3: Generating Bit by Bit — prng32_h()
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#define getBit(z,k) ((z>>k) & 1)
unsigned int prng32_h()
{
    static unsigned int seed=0xab;
    unsigned int r=0, b, x=0, y=0, z=0, k=5, m=0x5bd1e995, n=0x71b18589;
    int i=0;
    // Repeat the required operation.
    while(i<32)
    {
        x=x^m;
        x+=(seed<<16)+(seed<<8)+(seed);
        y+=(x>>13)+(x>>15)+x;
        y=y*n;
        z^=x+y;
        seed=z;
        k=seed%31;
        b=getBit(z, k);
        r=r+b*(1<<i);
        i++;
    }
    // Return the computed value or finish successfully.
    return r;
}
// Main function: execution starts here.
int main()
{
    for(int i=0; i<100; i++)
        // Display the result or prompt.
        printf("%u\t", prng32_h());
    return 0;
}
