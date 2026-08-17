/*
 * Program: Finding The Number Of Iterations For An Arbitrary N
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    long counter=0, n=1024, i;
    for(i=2; i<=n; i=i*i)       // Time complexity is O(loglogn)
        counter++;
    printf("The body of the loop is executed %ld times\n", counter);  // Display output
    return 0;  // Indicate successful program termination
}
