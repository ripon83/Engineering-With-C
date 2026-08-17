/*
 * Program: Size Of String Array 3
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    char *str[6]={  // Declare and initialize a character pointer
        "God",
        "Eshwar",
        "Allah",
        "Gott",
        "Dio",
        "Dieu"
    };

    printf("%ld", sizeof(str));  // Display output

    return 0;  // Indicate successful program termination
}
