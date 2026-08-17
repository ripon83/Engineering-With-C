/*
 * Program: Recursive Main Function
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
void main(int i)
{
    if(i<=10 && printf("%d\t", i) && main(i+1))
    {
    }
}
