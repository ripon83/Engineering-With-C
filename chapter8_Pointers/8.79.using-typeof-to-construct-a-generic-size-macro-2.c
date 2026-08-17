/*
 * Program: Using Typeof To Construct A Generic Size Macro 2
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

#define size(x) ((char *)(&(((__typeof__(x) *)0)[1])) - \
                 (char *)(&(((__typeof__(x) *)0)[0])))

int main()  // Main function: execution starts here
{
    printf("The size of char is %zu\n", size(char));  // Display output
    printf("The size of short is %zu\n", size(short));  // Display output
    printf("The size of int is %zu\n", size(int));  // Display output
    printf("The size of float is %zu\n", size(float));  // Display output
    printf("The size of double is %zu\n", size(double));  // Display output
    printf("The size of long double is %zu\n", size(long double));  // Display output

    return 0;  // Indicate successful program termination
}
