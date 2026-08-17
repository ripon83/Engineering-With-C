/*
 * Program: Static Variable 9
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
int foo()
{
    static int m=0;
    return m++;
}
int main()  // Main function: execution starts here
{
    printf("%d\t%d\t%d\t%d\n", foo(), foo(), foo(), foo());  // Display output
    printf("%d\t%d\t%d\t%d\n", foo(), foo(), foo(), foo());  // Display output
    printf("%d\t%d\t%d\t%d\n", foo(), foo(), foo(), foo());  // Display output
    return 0;  // Indicate successful program termination
}
