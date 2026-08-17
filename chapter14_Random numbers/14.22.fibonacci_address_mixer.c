/*
 * Program 14.22: Step 4: Removing clock() Entirely — A Fibonacci-Style Address Mixer
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <time.h>
#define getBit(s, k) ((s>>k) & 1)
int trng32_a()
{
    int i=0, t, k, b, n=32, r=0;
    static unsigned long int s3=0;
    unsigned long int s1=(unsigned long int)(&i);
    unsigned long int s2=(unsigned long int)(&s3);
    // Repeat the required operation.
    while(i<n)
    {
        s3+=(s1^s2);
        s1=s2;
        s2=s3;
        k=s3%61;
        b=getBit(s3, k);
        r=r+b*(1<<i);
        i++;
    }
    // Return the computed value or finish successfully.
    return r;
}
// Main function: execution starts here.
int main()
{
    for(int i=0; i<10; i++)
        // Display the result or prompt.
        printf("%d\t", trng32_a());
    return 0;
}
