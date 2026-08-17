/*
 * Program: Macro Example 21
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#define leap(year) \  // Define a macro
    ((year%4==0)&&((year%400==0)||(year%100!=0))) ? \
    printf("%d is a leap year\n",year) : \  // Display output
    printf("%d is not a leap year\n",year)  // Display output

int main()  // Main function: program execution starts here
{
    if(1)
        leap(2024);
    else
        printf("Invalid year\n");  // Display output
    return 0;  // Indicate successful program termination
}
