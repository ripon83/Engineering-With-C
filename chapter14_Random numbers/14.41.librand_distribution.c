/*
 * Program 14.41: Bringing It Together with librand.h
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "librand.h"
void freq(int f[], int n)
{
    int i;
    // Repeat the required operation.
    for(i=0; i<n; i++)
    {
        f[(trng32_ch()%6)+1]++;
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
