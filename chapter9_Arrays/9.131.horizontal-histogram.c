/*
 * Program: Horizontal Histogram
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
	int a[]={18, 14, 27, 23, 14};
	int i, j, n=5;
	for(i=0; i<n; i++)  // Iterate through array elements
	{
		printf("%d\t", a[i]);  // Display output
		for(j=0; j<a[i]; j++)  // Iterate through array elements
		{
			printf("*");  // Display output
		}
		printf("\n");  // Display output
	}
	return 0;  // Indicate successful program termination
}
