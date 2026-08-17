/*
 * Program: Find Out The Output Of The Following Program 2
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include<stdio.h>
int main()  // Main function: execution starts here
{
	int i=0, j=1;
	if(++i == j++)
		printf("%d %d", i--, j--);  // Display output
	else
		printf("%d %d", i, j);  // Display output
	return 0;  // Indicate successful program termination
}
