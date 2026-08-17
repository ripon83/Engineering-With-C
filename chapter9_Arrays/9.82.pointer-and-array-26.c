/*
 * Program: Pointer And Array 26
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    char *names[3]={"Alice", "Bob", "Carol"};

    for(int i=0; i<3; i++)  // Iterate through array elements
        printf("%s\n", names[i]);  // Display output

    return 0;  // Indicate successful program termination
}
