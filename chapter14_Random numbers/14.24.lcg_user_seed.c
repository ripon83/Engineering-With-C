/*
 * Program 14.24: Version 1: A User-Supplied Seed
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
// Main function: execution starts here.
int main()
{
    int xn, xn1, a=3, c=5, m=11;
    // Display the result or prompt.
    printf("Enter the previous random number:");
    // Read input from the user.
    scanf("%d", &xn);
    xn1=(a*xn+c) % m;
    printf("The generated random number is: %d", xn1);
    // Return the computed value or finish successfully.
    return 0;
}
