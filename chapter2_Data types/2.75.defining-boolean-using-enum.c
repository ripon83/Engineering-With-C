/*
 * Program: Defining Boolean Using Enum
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    enum Bool {false, true};

    typedef enum Bool bool;

    bool m = true;
    bool n = false;

    printf("%d\t%d", m, n);  // Display output

    return 0;  // Indicate successful program termination
}
