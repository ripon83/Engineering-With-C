/*
 * Program 14.31: Version 4: Passing the Seed as a Parameter — But Introducing a New Bug
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
unsigned int prng(int seed)
{
    unsigned int a[20]={2030826917, 3082427726, 3956945254, 1860262496, 74654617, 2047028154, 4146139604};
    unsigned int b[20]={2388156329, 2350795966, 856776393, 2635440412, 2847918652, 3332540064, 2269267216, 580978650, 3159456094, 96042424, 121901380};
    int i=seed%7, j=seed%11;
    unsigned long int x=a[i], y=b[j];
    static unsigned long int z=0;
    z^=(x^y);
    seed^=z;
    // Return the computed value or finish successfully.
    return z;
}
// Main function: execution starts here.
int main()
{
    unsigned int n, seed=123456;
    // Repeat the required operation.
    for(int i=0; i<10; i++)
    {
        // Display the result or prompt.
        printf("%u\t", prng(seed));
        seed=n;
    }
}
