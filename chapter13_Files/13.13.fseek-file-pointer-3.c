/*
 * Program: Fseek File Pointer 3
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include<stdio.h>
int main()  // Main function: program execution starts here
{
	FILE *fp=fopen("myfile.txt", "w+");  // Open the file with the specified mode
	fprintf(fp, "Time is money, save it.");  // Write formatted data to the file
	fseek(fp, -10, SEEK_SET);  // Reposition the file pointer
	fprintf(fp, "but we love to waste it.");  // Write formatted data to the file
	fclose(fp);  // Close the file
	return 0;	  // Indicate successful program termination
}
