/*
 * Program: Macro Example 16
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#define largest(x,y) x>y?x:y  // Define a macro
int main()  // Main function: program execution starts here
{
    int n=largest(10,20)+5;
    printf("%d\n",n);  // Display output
    return 0;  // Indicate successful program termination
}
