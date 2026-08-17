/*
 * Program: Variadic Function
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <stdarg.h>

void foo(int count, ...)
{
    va_list args;

    va_start(args, count);  // Initialize access to variable arguments

    for(int i=0; i<count; i++)  // Repeat the required operation
        printf("%d\t", va_arg(args, int));  // Display output

    printf("\n");  // Display output

    va_end(args);  // Finish processing variable arguments
}

int main()  // Main function: execution starts here
{
    foo(6,1,2,3,4,5,6);
    foo(4,6,3,4,5);
    foo(2,1,2,3);

    return 0;  // Indicate successful program termination
}
