/*
 * Program: Generic Swapping
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

void swap(void *m, void *n, long size)
{
    char tmp[size];

    memcpy(tmp, m, size);
    memcpy(m, n, size);
    memcpy(n, tmp, size);
}

int main()  // Main function: program execution starts here
{
    int x=10, y=20;
    swap(&x, &y, sizeof(int));
    printf("After swapping integer: x=%d, y=%d\n", x, y);  // Display output

    double d1=1.5, d2=2.5;
    swap(&d1, &d2, sizeof(double));
    printf("After swapping double: d1=%.2f, d2=%.2f\n", d1, d2);  // Display output

    char c1='A', c2='B';
    swap(&c1, &c2, sizeof(char));
    printf("After swapping character: c1=%c, c2=%c\n", c1, c2);  // Display output

    long double q1=3.5, q2=1.45;
    swap(&q1, &q2, sizeof(long double));
    printf("After swapping long double: q1=%0.2Lf, q2=%0.2Lf\n", q1, q2);  // Display output

    return 0;  // Indicate successful program termination
}
