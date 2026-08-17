/*
 * Program 14.37: Version 6: When Addresses Aren't Available — trng32_ch()
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <x86intrin.h>
#include <time.h>
#define getBit(z, k) ((z>>k) & 1)
#define m 0x5bd1e995
#define n 0x71b18589
unsigned int trng32_ch()
{
    unsigned int r=0, b, x=0, y=0, z=0, k=5;
    static unsigned long int seed3;
    unsigned long int seed1=clock();
    unsigned long int seed2=__rdtsc();
    int i=0;
    // Repeat the required operation.
    while(i<32)
    {
        seed3+=(seed1^seed2)^(__rdtsc()^clock());
        x=x^m;
        x+=(seed3<<16)+(seed3<<8)+(seed3);
        y+=(x>>13)+(x>>15)+x;
        y=y*n;
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
        printf("%u\t", trng32_ch());
    return 0;
}
