/*
 * Program: Generic Comparator
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

int comparator(const void *p, const void *q, int size)
{
    return memcmp(p, q, size);
}

int main()  // Main function: program execution starts here
{
    double x = 10.5, y = 10;
    int t = comparator(&x, &y, sizeof(double));

    if(t == 0)
        printf("%lf and %lf are Equal\n", x, y);  // Display output
    else if(t > 0)
        printf("%lf is greater than %lf\n", x, y);  // Display output
    else
        printf("%lf is smaller than %lf\n", x, y);  // Display output

    int m = 10, n = 20;
    t = comparator(&m, &n, sizeof(int));

    if(t == 0)
        printf("%d and %d are Equal\n", m, n);  // Display output
    else if(t > 0)
        printf("%d is greater than %d\n", m, n);  // Display output
    else
        printf("%d is smaller than %d\n", m, n);  // Display output

    char str1[] = "Good", str2[] = "Bad";  // Initialize a character array as a string
    t = comparator(str1, str2, sizeof(str2));

    if(t == 0)
        printf("%s and %s are Equal\n", str1, str2);  // Display output
    else if(t > 0)
        printf("%s is greater than %s\n", str1, str2);  // Display output
    else
        printf("%s is smaller than %s\n", str1, str2);  // Display output

    return 0;  // Indicate successful program termination
}
