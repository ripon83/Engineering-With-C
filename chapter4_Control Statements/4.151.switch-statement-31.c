/*
 * Program: Switch Statement 31
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int day;
    printf("Enter the day of your date of birth:");  // Display output
    scanf("%d", &day);  // Read input

    int n = (day + 1 << 7) % 7;

    switch(n)  // Select a branch based on the expression value
    {
        case 0:
            printf("You have a good heart.\n");  // Display output
            break;  // Exit the current switch or loop
        case 1:
            printf("You try to help others.\n");  // Display output
            break;  // Exit the current switch or loop
        case 2:
            printf("You work hard.\n");  // Display output
            break;  // Exit the current switch or loop
        case 3:
            printf("You can excel in your field.\n");  // Display output
            break;  // Exit the current switch or loop
        case 4:
            printf("Try to solve problems today.\n");  // Display output
            break;  // Exit the current switch or loop
        case 5:
            printf("Choose your friends wisely.\n");  // Display output
            break;  // Exit the current switch or loop
        case 6:
            printf("Try to become successful.\n");  // Display output
            break;  // Exit the current switch or loop
        default:
            printf("Wrong input.\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
