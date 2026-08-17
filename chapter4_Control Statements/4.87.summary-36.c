/*
 * Program: Summary 36
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include<stdio.h>
int main(){  // Main function: program execution starts here
	int x=0,y=0,z=0;
	if(++x,y,z++)  // Test the specified condition
            printf("If block: %d %d %d",x,y,z);  // Display output
        else  // Execute this branch when the preceding condition is false
            printf("Else block: %d %d %d",x,y,z);  // Display output
	return 0;  // Indicate successful program termination
}
