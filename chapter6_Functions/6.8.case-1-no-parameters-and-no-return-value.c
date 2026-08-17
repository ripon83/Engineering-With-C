/*
 * Program: Case 1 No Parameters And No Return Value
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void show()
{
    for(int i=0; i<=100; i++)  // Repeat the required operation
    {
        if((i&1)==0)
            printf("%d\t", i);  // Display output
    }
}

int main()  // Main function: execution starts here
{
    show();
    return 0;  // Indicate successful program termination
}
