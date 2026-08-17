/*
 * Program: Macro Example 11
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

#define largest(w,x,y,z) \  // Define a macro
    ((w>x && w>y && w>z) ? w : \
    ((x>y && x>z) ? x : (y>z ? y : z)))

int main()  // Main function: program execution starts here
{
    int m;

    m=largest(15,100,20,30);
    printf("The largest value: %d\n",m);  // Display output

    m=largest(15,100,20,130);
    printf("The largest value: %d\n",m);  // Display output

    m=largest(15,100,120,30);
    printf("The largest value: %d\n",m);  // Display output

    return 0;  // Indicate successful program termination
}
