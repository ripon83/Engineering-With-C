/*
 * Program: Ternary Operator
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

#define check(x) do {                                      \  // Define a macro
    (x & 1) ? printf("%d is odd\n", x)                     \
            : printf("%d is even\n", x);                   \
    (x % 3 == 0) ? printf("Divisible by 3\n")              \
                 : printf("Not divisible by 3\n");         \
} while (0)

int main()  // Main function: program execution starts here
{
    check(34);
    check(33);
    check(24);
    check(41);

    return 0;  // Indicate successful program termination
}
