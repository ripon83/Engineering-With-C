/*
 * Program: Summary 13
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int i;
    if (!printf("The output is: "))  // Test the specified condition
        i = 3;
    else  // Execute this branch when the preceding condition is false
        i = 5;
    printf("%d", i);  // Display output
    return 0;  // Indicate successful program termination
}
