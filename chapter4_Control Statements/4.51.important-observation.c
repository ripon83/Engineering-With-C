/*
 * Program: Important Observation
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    float m=6.9;

    if(sizeof(m)==sizeof(6.9))  // Test the specified condition
        printf("Equal size and it is %zu\n",sizeof(m));  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Sizeof m is %zu and 6.9 is %zu",  // Display output
               sizeof(m),sizeof(6.9));

    return 0;  // Indicate successful program termination
}
