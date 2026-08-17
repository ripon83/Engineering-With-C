/*
 * Program: Data Size 2
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    printf("\"char\" occupies: %zu byte\n", sizeof(char));  // Display output
    printf("\"short\" occupies: %zu bytes\n", sizeof(short));  // Display output
    printf("\"int\" occupies: %zu bytes\n", sizeof(int));  // Display output
    printf("\"long\" occupies: %zu bytes\n", sizeof(long));  // Display output
    printf("\"long long\" occupies: %zu bytes\n", sizeof(long long));  // Display output

    return 0;  // Indicate successful program termination
}
