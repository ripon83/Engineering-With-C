/*
 * Program: Why Does It Look Almost Constant 4
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i, j;
    int c1=0, c2=0, c3=0, c4=0;
    int m=10, n=10000;

    for(i=0; i<m; i++, c1++)  // Start or control a for loop
    {
        for(j=0; j<n; j++, c1++)  // Start or control a for loop
        {
            c2++;
        }
    }

    printf("Comparison counter1=%d  Within the body counter2=%d\n",  // Display output
           c1, c2);

    m=10000;
    n=10;

    for(i=0; i<m; i++, c3++)  // Start or control a for loop
    {
        for(j=0; j<n; j++, c3++)  // Start or control a for loop
        {
            c4++;
        }
    }

    printf("Comparison counter3=%d  Within the body counter4=%d\n",  // Display output
           c3, c4);

    return 0;  // Indicate successful program termination
}
