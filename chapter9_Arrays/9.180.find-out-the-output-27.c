/*
 * Program: Find Out The Output 27
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[5]={10, 20, 30, 40, 50};
    int *p=a;
    *p+=5;
    *(p+2)+=10;
    printf("%d\t%d", a[0], a[2]);  // Display output
    return 0;  // Indicate successful program termination
}
