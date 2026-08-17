/*
 * Program: Data Size
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    char x;
    short y;
    int z;
    long m;
    long long n;

    printf("\"char\" occupies: %zu byte\n", sizeof(x));  // Display output
    printf("\"short\" occupies: %zu bytes\n", sizeof(y));  // Display output
    printf("\"int\" occupies: %zu bytes\n", sizeof(z));  // Display output
    printf("\"long\" occupies: %zu bytes\n", sizeof(m));  // Display output
    printf("\"long long\" occupies: %zu bytes\n", sizeof(n));  // Display output

    return 0;  // Indicate successful program termination
}
