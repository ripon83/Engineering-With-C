/*
 * Program 14.5: Seeding with a Fixed, Chosen Value
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Main function: execution starts here.
int main()
{
    // Seed the pseudo-random number generator.
    srand(0);
    // Generate a pseudo-random value.
    printf("%d", rand());
    // Return the computed value or finish successfully.
    return 0;
}
