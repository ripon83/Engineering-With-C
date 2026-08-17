/*
 * Program: Fseek File Pointer 5
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include<stdio.h>
int main()  // Main function: program execution starts here
{
	FILE *fp=fopen("myfile.txt", "w+");  // Open the file with the specified mode
	fprintf(fp, "The change is the only constant. Nothing is permanent, neither happiness nor sadness.");  // Write formatted data to the file
	fseek(fp, -52, SEEK_END);  // Reposition the file pointer
	fseek(fp, 0, SEEK_END);  // Reposition the file pointer
	fprintf(fp, "So, learn from your mistakes and change yourself for betterment.");  // Write formatted data to the file
	fclose(fp);  // Close the file
	return 0;	  // Indicate successful program termination
}
