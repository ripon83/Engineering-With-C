/*
 * Program: Finding The Number Of Iterations
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    long counter=0, n=1024, i;
    for(i=1; i<=n; i=1<<i)  // Start or control a for loop
        counter++;
    printf("The body of the loop is executed %ld times\n", counter);  // Display output
    return 0;  // Indicate successful program termination
}
