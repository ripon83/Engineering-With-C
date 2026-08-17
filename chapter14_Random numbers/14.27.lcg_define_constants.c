/*
 * Program 14.27: Version 4: Using #define for the Constants
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#define a 7873
#define c 5827
#define m 11
int prng()
{
    static int xn=5;
    int xn1;
    xn1=(a*xn+c) % m;
    xn=xn1;
    // Return the computed value or finish successfully.
    return xn1;
}
// Main function: execution starts here.
int main()
{
    // Repeat the required operation.
    for(int i=0; i<10; i++)
        // Display the result or prompt.
        printf("%d\t", prng());
    return 0;
}
