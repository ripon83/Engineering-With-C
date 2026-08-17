/*
 * Program: Variadic Function 3
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <stdarg.h>

void print(const char *str, ...)
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
    print("1.234\t","Hello\t","1234\n",NULL);

    print("A\t","String\t",
          "1.2345\t","1234\n",NULL);

    print("Beautiful Codes\n",NULL);

    return 0;  // Indicate successful program termination
}
