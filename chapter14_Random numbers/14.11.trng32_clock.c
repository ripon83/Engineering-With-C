/*
 * Program 14.11: The Three Generator Functions: trng16(), trng32(), trng64()
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <time.h>
int trng32()
{
    int i=0, t, b, n=32, r=0;
    // Repeat the required operation.
    while(i<n)
    {
        t=clock();
        b=t&1;
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
printf("%d", trng32());
return 0;
}
