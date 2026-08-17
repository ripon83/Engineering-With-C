/*
 * Program: Problems On Numbers
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n;
    float m, per;
    printf("Enter your obtained mark:");  // Display output
    scanf("%f", &m);  // Read input
    printf("Enter the total marks:");  // Display output
    scanf("%d", &n);  // Read input
    per=(m/n)*100;
    printf("You percentage is: %0.2f", per);  // Display output
    return 0;  // Indicate successful program termination
}
