/*
 * Program: Case 2 One Or More Parameters And No Return Value
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void show(int n)
{
    if(n<0)
    {
        printf("n cannot be negative");  // Display output
        return;
    }

    for(int i=0; i<=n; i++)  // Repeat the required operation
    {
        if((i&1)==1)
            printf("%d\t", i);  // Display output
    }
}

int main()  // Main function: execution starts here
{
    show(100);
    return 0;  // Indicate successful program termination
}
