/*
 * Program: Formatted File Output 6
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include<stdio.h>
int main()  // Main function: program execution starts here
{
	FILE *fp=fopen(__FILE__, "a");  // Open the file with the specified mode
	fprintf(fp, "\n//Comments are added to understand the program\n");
	fclose(fp);  // Close the file
	return 0;  // Indicate successful program termination
}

//Comments are added to understand the program
