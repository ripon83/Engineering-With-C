/*
 * Program: Enum Example Months
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    enum month
    {
        january=1,
        february,
        march,
        april,
        may,
        june,
        july,
        august,
        september,
        october,
        november,
        december
    };

    int i;

    for(i=january; i<=december; i++)
        printf("%d\t",i);  // Display output

    enum month m;

    m=june;

    printf("\nJune is %d",m);  // Display output

    return 0;  // Indicate successful program termination
}
