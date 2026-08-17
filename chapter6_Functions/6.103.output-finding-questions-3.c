/*
 * Program: Output Finding Questions 3
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include<stdio.h>
int foo()
{
    static int n=0;
    return n++ + ++n;
}
int main()  // Main function: execution starts here
{
	printf("%d  %d  %d", foo(), foo(), foo());	  // Display output
	return 0;  // Indicate successful program termination
}
