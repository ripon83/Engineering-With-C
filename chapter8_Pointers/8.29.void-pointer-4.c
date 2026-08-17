/*
 * Program: Void Pointer 4
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int comparator(const void *x, const void *y, char c)
{
    if (c == 'c')
        return (*(char *)x > *(char *)y)
             - (*(char *)x < *(char *)y);

    if (c == 's')
        return (*(short *)x > *(short *)y)
             - (*(short *)x < *(short *)y);

    if (c == 'i')
        return (*(int *)x > *(int *)y)
             - (*(int *)x < *(int *)y);

    if (c == 'l')
        return (*(long int *)x > *(long int *)y)
             - (*(long int *)x < *(long int *)y);

    if (c == 'f')
        return (*(float *)x > *(float *)y)
             - (*(float *)x < *(float *)y);

    if (c == 'd')
        return (*(double *)x > *(double *)y)
             - (*(double *)x < *(double *)y);

    if (c == 'q')
        return (*(long double *)x > *(long double *)y)
             - (*(long double *)x < *(long double *)y);

    return 0;  // Indicate successful program termination
}

int main()  // Main function: execution starts here
{
    long double m = 20, n = 10;

    int k = comparator(&m, &n, 'q');

    if (k == 0)
        printf("Equal\n");  // Display output
    else if (k > 0)
        printf("Greater\n");  // Display output
    else
        printf("Smaller\n");  // Display output

    char a = 5, b = 10;

    k = comparator(&a, &b, 'c');

    if (k == 0)
        printf("Equal\n");  // Display output
    else if (k > 0)
        printf("Greater\n");  // Display output
    else
        printf("Smaller\n");  // Display output

    return 0;  // Indicate successful program termination
}
