/*
 * Program: Pointer Arithmetic
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
#define size(x) ((char *)(&x + 1) - (char *)&x)

int main()  // Main function: execution starts here
{
    char ch;
    short m;
    int n;
    float x;
    double y;
    long double z;

    printf("The size of char is %zu\n", size(ch));  // Display output
    printf("The size of short is %zu\n", size(m));  // Display output
    printf("The size of int is %zu\n", size(n));  // Display output
    printf("The size of float is %zu\n", size(x));  // Display output
    printf("The size of double is %zu\n", size(y));  // Display output
    printf("The size of long double is %zu\n", size(z));  // Display output

    return 0;  // Indicate successful program termination
}
