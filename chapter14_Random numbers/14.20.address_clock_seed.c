/*
 * Program 14.20: Step 2: A First Attempt — Address as a Seed, Mixed with clock()
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <time.h>
#define getBit(s,k) ((s>>k) & 1)
int trng32_a()
{
    int i=0, t, k, b, n=32, r=0;
    unsigned long int s=(unsigned long int)(&t);
    // Repeat the required operation.
    while(i<n)
    {
        s=s^clock(); 
        k=s%15;
        b=getBit(s, k);
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
    printf("%d", trng32_a());
    return 0;
}
