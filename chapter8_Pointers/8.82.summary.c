/*
 * Program: Summary
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
#define size(x) (char*) (&(((__typeof__(x) *)0)[1])) - (char *)(&(((__typeof__(x) *)0)[0]))
int main()  // Main function: execution starts here
{
    char ch;
    short m;
    int n;
    float x;
    double y;
    long double z;
    printf("The size of char is %ld\n", size(ch));  // Display output
    printf("The size of short is %ld\n", size(m));  // Display output
    printf("The size of int is %ld\n", size(n));  // Display output
    printf("The size of float is %ld\n", size(x));  // Display output
    printf("The size of double is %ld\n", size(y));  // Display output
    printf("The size of long double is %ld\n", size(z));  // Display output
    return 0;  // Indicate successful program termination
}
