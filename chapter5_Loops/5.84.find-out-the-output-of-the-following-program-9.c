/*
 * Program: Find Out The Output Of The Following Program 9
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include<stdio.h>
int main()  // Main function: execution starts here
{
	int i;
	for(i=0; i<(i++, 6); i++)  // Start or control a for loop
		printf("%d\t", i);  // Display output
	return 0;  // Indicate successful program termination
}
