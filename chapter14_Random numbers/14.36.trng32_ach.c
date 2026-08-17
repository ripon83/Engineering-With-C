/*
 * Program 14.36: Version 5: A Full TRNG Built on the Hash-Mixing Core — trng32_ach()
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <time.h>
#include <x86intrin.h>
#define getBit(z, k) ((z>>k) & 1)
#define c1 0x5bd1e995
#define c2 0x71b18589
unsigned int trng32_ach()
{
    unsigned int r=0, b, x=0, y=0, z=0, k=5;
    static unsigned long int seed3;
    unsigned long int seed1=(unsigned long int)(&r);
    unsigned long int seed2=(unsigned long int)(&seed3);
    int i=0;
    // Repeat the required operation.
    while(i<32)
    {
        seed3+=(seed1^seed2)^__rdtsc();
        x=x^c1 ^ clock();
        x+=(seed3<<16)+(seed3<<8)+(seed3);
        y+=(x>>13)+(x>>15)+x;
        y=y*c2;
        z^=x+y;
        seed3=z;
        k=seed3%31;
        b=getBit(z, k);
        r=r+b*(1<<i);
        seed1=seed2;
        seed2=seed3;
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
        printf("%u\t", trng32_ach());
    return 0;
}
