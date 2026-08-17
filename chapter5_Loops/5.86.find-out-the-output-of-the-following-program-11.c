/*
 * Program: Find Out The Output Of The Following Program 11
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include<stdio.h>
int main()  // Main function: execution starts here
{
	int i=1, j=1;
	for( ; j; printf("%d %d ", i, j))  // Start or control a for loop
	    j=(i++<=1);
	return 0;  // Indicate successful program termination
}
