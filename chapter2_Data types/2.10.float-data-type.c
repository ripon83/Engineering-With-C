/*
 * Program: Float Data Type
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    float x;
    double y;
    long double z;

    printf("\"float\" occupies %zu bytes\n", sizeof(x));  // Display output
    printf("\"double\" occupies %zu bytes\n", sizeof(y));  // Display output
    printf("\"long double\" occupies %zu bytes\n", sizeof(z));  // Display output

    return 0;  // Indicate successful program termination
}
