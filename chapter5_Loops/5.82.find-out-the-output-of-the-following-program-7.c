/*
 * Program: Find Out The Output Of The Following Program 7
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include<stdio.h>
int main()  // Main function: execution starts here
{
	static int i;
	for(i++; ++i; i++)  // Start or control a for loop
	{
		printf("%d\t", i);  // Display output
		if(i>=15) 
		    break;  // Exit the nearest loop
	}
	return 0;  // Indicate successful program termination
}
