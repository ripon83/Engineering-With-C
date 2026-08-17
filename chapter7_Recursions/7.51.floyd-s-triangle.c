/*
 * Program: Floyd S Triangle
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void floyd(int n)
{
    if(n>1)
        floyd(n-1);  // Function call
    static int counter=1;
    for(int i=1; i<=n; i++)  // Repeat the required operation
        printf("%d\t", counter++);  // Display output
    printf("\n");  // Display output
}
int main()   // Main function: execution starts here
{
    int n=5;
    floyd(n);  // Function call
    return 0;  // Indicate successful program termination
}
