/*
 * Program: Logarithmic Complexity 2
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    long i, counter=0, n=1024;
    for(i=n; i>=1; i=i/2)  // Start or control a for loop
    {
        counter++;
    }
    printf("The body of the loop is executed %ld times\n",  // Display output
           counter);
    return 0;  // Indicate successful program termination
}
