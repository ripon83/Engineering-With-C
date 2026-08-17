/*
 * Program: Summary 38
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    if("How to learn C programming?")  // Test the specified condition
        printf("Practice daily basis.");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Only read programs.");  // Display output
    return 0;  // Indicate successful program termination
}
