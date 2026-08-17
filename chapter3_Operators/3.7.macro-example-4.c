/*
 * Program: Macro Example 4
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

#define PI 3.141592  // Define a macro

#define area(r) {                                      \  // Define a macro
    printf("Given radius is: %d\n", (r));              \  // Display output
    printf("Area is: %f\n", (PI)*(r)*(r));             \  // Display output
}

int main()  // Main function: program execution starts here
{
    area(1);
    area(2);
    area(3);
    area(4);
    return 0;  // Indicate successful program termination
}
