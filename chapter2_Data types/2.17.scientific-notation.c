/*
 * Program: Scientific Notation
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>
#include <float.h>
#include <math.h>

int main(void)  // Main function: program execution starts here
{
    printf("float: %g (approx. 2^%g) %g (approx. 2^%g)\n",  // Display output
           FLT_MIN, log2f(FLT_MIN),
           FLT_MAX, log2f(FLT_MAX));

    printf("double: %g (approx. 2^%g) %g (approx. 2^%g)\n",  // Display output
           DBL_MIN, log2(DBL_MIN),
           DBL_MAX, log2(DBL_MAX));

    printf("long double: %Lg (approx. 2^%Lg) %Lg (approx. 2^%Lg)\n",  // Display output
           LDBL_MIN, log2l(LDBL_MIN),
           LDBL_MAX, log2l(LDBL_MAX));

    return 0;  // Indicate successful program termination
}
