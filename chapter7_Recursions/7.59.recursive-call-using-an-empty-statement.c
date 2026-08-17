/*
 * Program: Recursive Call Using An Empty Statement
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int main(int i)  // Main function: execution starts here
{
    if(i<=10 && printf("%d\t", i) && main(i+1));
}
