/*
 * Program: Using A Static Variable 2
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    static int count=0;
    if (count++ < 10)
    {
        printf("%d\t", count);  // Display output
        main();  // Function call
    }
    return 0;  // Indicate successful program termination
}
