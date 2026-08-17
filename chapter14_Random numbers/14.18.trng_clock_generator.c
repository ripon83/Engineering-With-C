/*
 * Program 14.18: The Program
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <x86intrin.h>
#define getBit(x, k) ((x>>k) & 1)
short trng16_c()
{
    short n=16, i=0, b, r=0;
    // Repeat the required operation.
    while(i<n)
    {
        long t= __rdtsc();
        b=getBit(t, t%11);
        r=r+b*(1<<i);
        i++;
    }
    // Return the computed value or finish successfully.
    return r;
}
// Main function: execution starts here.
int main()
{
    // Display the result or prompt.
    printf("%hi", trng16_c());
}
