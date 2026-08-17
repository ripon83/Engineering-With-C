/*
 * Program: Goto Statement 6
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()   // Main function: execution starts here
{
    int n=12321, tmp, rev=0;
    tmp=n;
    loop:
        rev=rev*10+tmp%10;
        tmp=tmp/10;
    if(tmp)
        goto loop;  // Transfer control to the labeled statement
    if(rev==n)
        printf("Palindrome.");  // Display output
    else    
        printf("Not Palindrome.");  // Display output
    return 0;  // Indicate successful program termination
}
