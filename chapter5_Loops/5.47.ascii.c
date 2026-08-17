/*
 * Program: Ascii
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int counter=0;
    for(int i=32; i<127; i++)  // Start or control a for loop
    {
        printf("%c is %d \t", i, i);  // Display output
        counter++;
        if(counter==5)
        {
            printf("\n");  // Display output
            counter=0;
        }
    }
    return 0;  // Indicate successful program termination
}
