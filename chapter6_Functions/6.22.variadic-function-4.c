/*
 * Program: Variadic Function 4
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <stdarg.h>

void print(const char *str,...)
{
    va_list args;

    va_start(args, str);  // Initialize access to variable arguments

    while(str != NULL)  // Repeat while the condition remains true
    {
        printf("%s", str);  // Display output
        str = va_arg(args, const char *);  // Retrieve the next variable argument
    }

    va_end(args);  // Finish processing variable arguments
}

int main()  // Main function: execution starts here
{
    print("Hello","World");

    return 0;  // Indicate successful program termination
}
