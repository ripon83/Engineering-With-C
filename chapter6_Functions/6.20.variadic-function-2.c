/*
 * Program: Variadic Function 2
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    int total=0;

    va_list args;

    va_start(args, count);  // Initialize access to variable arguments

    for(int i=0; i<count; i++)  // Repeat the required operation
        total += va_arg(args, int);  // Retrieve the next variable argument

    va_end(args);  // Finish processing variable arguments

    return total;
}

int main()  // Main function: execution starts here
{
    printf("Sum = %d\n", sum(2,80,20));  // Display output
    printf("Sum = %d\n", sum(10,1,2,3,4,5,6,7,8,9,10));  // Display output
    printf("Sum = %d\n", sum(10,2,4,6,8,10,12,14,16,18,20));  // Display output

    return 0;  // Indicate successful program termination
}
