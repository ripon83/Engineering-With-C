/*
 * Program: Find Out The Output 53
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#define setBit(n,p) ((n)|(1<<(p)))
#define getBit(n,p) (((n)>>(p))&1)

int main()  // Main function: execution starts here
{
    int n=0;
    n=setBit(n, 2);
    n=setBit(n, 5);
    printf("%d\t%d\t%d",  // Display output
           getBit(n, 2),
           getBit(n, 4),
           getBit(n, 5));
    return 0;  // Indicate successful program termination
}
