/*
 * Program: Output Finding Questions 25
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
int foo() 
{  
    return (1, 2, 3, 4, 5);  
}  
int main()   // Main function: execution starts here
{  
    printf("%d", foo());    // Display output
    return 0;    // Indicate successful program termination
}
