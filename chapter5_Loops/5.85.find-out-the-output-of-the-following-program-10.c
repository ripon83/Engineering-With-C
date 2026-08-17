/*
 * Program: Find Out The Output Of The Following Program 10
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include<stdio.h>
int main()  // Main function: execution starts here
{
	int i, j;
	for(i=1, j=1; i<=5, j<=5; i++, j++)  // Start or control a for loop
	    printf("%d %d ", i, j);  // Display output
	return 0;  // Indicate successful program termination
}
