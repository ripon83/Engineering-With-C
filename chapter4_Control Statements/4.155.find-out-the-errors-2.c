/*
 * Program: Find Out The Errors 2
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n=2;
    if(n>=2)  // Test the specified condition
        printf("If block\n");  // Display output
        printf("%d\n",n);  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Else block\n");  // Display output
        printf("%d\n",n);  // Display output
    return 0;  // Indicate successful program termination
}
