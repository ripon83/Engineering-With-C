/*
 * Program 14.39: Experiment 1: Measuring the Distribution with Reproducible rand()
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int roll()
{
    // Generate a pseudo-random value.
    return ((rand()%6)+1);
}
void freq(int f[], int n)
{
    int i;
    // Repeat the required operation.
    for(i=0;i<n;i++)
    {
        int j=roll();
        f[j]++;
    }
}
// Main function: execution starts here.
int main()
{
    int f[7]={0, 0, 0, 0, 0, 0, 0};
    int n=10000, i;
    freq(f, n);
    // Display the result or prompt.
    printf("Face\tFrequencies\n");
    for(i=1; i<=6; i++)
        printf("%d\t%d\n", i, f[i]);
    // Return the computed value or finish successfully.
    return 0;
}
