/*
 * Program 14.21: Step 3: The 64-Bit Version
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <time.h>
#define getBit(s, k) ((s>>k) & 1)
long int trng64_a()
{
    int i=0, t, k, b, n=64;
    long int r=0;
    unsigned long int s=(unsigned long int)(&t);
    // Repeat the required operation.
    while(i<n)
    {
        s=s^clock();
        k=s%61;
        b=getBit(s, k);
        r=r+b*(1L<<i);
        i++;
    }
    // Return the computed value or finish successfully.
    return r;
}
// Main function: execution starts here.
int main()
{
    // Display the result or prompt.
    printf("%ld", trng64_a());
    return 0;
}
