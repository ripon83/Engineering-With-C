/*
 * Program: Matrix Encryption 2
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int k1=35, k2=20, cipher=37;
    int msg=cipher^k1^k2;
    printf("%d\n", msg);  // Display output
    return 0;  // Indicate successful program termination
}
