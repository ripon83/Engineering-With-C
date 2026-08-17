/*
 * Program 14.13: Tracing the Algorithm Step by Step, with Instrumentation
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <time.h>
short trng16()
{
    short i=0, t, b, n=16, r=0;
    // Display the result or prompt.
    printf("Iteration\tClock\tLSB\tNumber\n");
    // Repeat the required operation.
    while(i<n)
    {
        printf("%hi\t\t", i+1);
        t=clock();
        printf("%hi\t", t);
        b=t&1;
        printf("%hi\t", b);
        r=r+b*(1<<i);
        printf("%hi\n", r);
        i++;
    }
    // Return the computed value or finish successfully.
    return r;
}
// Main function: execution starts here.
int main()
{
    printf("%hi", trng16());
    return 0;
}
