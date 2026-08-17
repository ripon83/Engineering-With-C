/*
 * Program: Using A Macro
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int w=150,x=100,y=20,z=30;
    int m=(w<x&&w<y&&w<z)?w:((x<y&&x<z)?x:(y<z)?y:z);
    printf("The smallest value:%d",m);  // Display output
    return 0;  // Indicate successful program termination
}
