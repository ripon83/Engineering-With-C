/*
 * Program: Matrix Encryption
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int msg=18, k1=35, k2=20, cipher;
    cipher=m^k1^k2;
    printf("%d\n", cipher);  // Display output
    return 0;  // Indicate successful program termination
}
