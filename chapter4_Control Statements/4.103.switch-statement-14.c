/*
 * Program: Switch Statement 14
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    switch(1)  // Select a branch based on the expression value
    {
        case 1:
            printf("Case 1\n");  // Display output

            switch(2)  // Select a branch based on the expression value
            {
                case 1:
                    printf("Inside case 1\n");  // Display output
                    break;  // Exit the current switch or loop

                case 2:
                    printf("Inside case 2\n");  // Display output
                    break;  // Exit the current switch or loop

                default:
                    printf("Inside default\n");  // Display output
            }
            break;  // Exit the current switch or loop

        case 2:
            printf("Case 2\n");  // Display output
            break;  // Exit the current switch or loop

        default:
            printf("Default\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
