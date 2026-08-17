/*
 * Program: Goto Statement 5
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()   // Main function: execution starts here
{
    int i=0, a=-1, b=1, c, n=15;
    loop:
        c=a+b;
        a=b;
        b=c;
        printf("%d\t", c);  // Display output
        i++;
    if(i<=n)
        goto loop;  // Transfer control to the labeled statement
    return 0;  // Indicate successful program termination
}
