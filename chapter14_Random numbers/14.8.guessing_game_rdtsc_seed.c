/*
 * Program 14.8: Version 3: Strengthening the Seed with __rdtsc()
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <x86intrin.h>
// Main function: execution starts here.
int main()
{
    int m, n, k=10;
    // Seed the pseudo-random number generator.
    srand(clock()^__rdtsc());
    // Generate a pseudo-random value.
    m=rand()%(k+1);
    // Display the result or prompt.
    printf("Guess a number between 0 to %d:", k+1);
    // Read input from the user.
    scanf("%d", &n);
    if(m==n)
        printf("The WINNER");
    else
        printf("Wrong guess: The number was %d", m);
    // Return the computed value or finish successfully.
    return 0;
}
