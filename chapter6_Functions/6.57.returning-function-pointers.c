/*
 * Program: Returning Function Pointers
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int add(int m, int n)
{
    return m+n;
}

int subtract(int m, int n)
{
    return m-n;
}

int multiply(int m, int n)
{
    return m*n;
}

int modulus(int m, int n)
{
    return m%n;
}

int (*getOperation(int ch))(int, int)
{
    if(ch == 1)
        return add;
    else if(ch == 2)
        return subtract;
    else if(ch == 3)
        return multiply;
    else if(ch == 4)
        return modulus;
    else
        return NULL;
}

int main()  // Main function: execution starts here
{
    int (*operation)(int, int);

    operation = getOperation(1);
    printf("Result: %d\n", operation(18, 8));  // Display output

    operation = getOperation(2);
    printf("Result: %d\n", operation(18, 8));  // Display output

    operation = getOperation(3);
    printf("Result: %d\n", operation(18, 8));  // Display output

    operation = getOperation(4);
    printf("Result: %d\n", operation(18, 8));  // Display output

    return 0;  // Indicate successful program termination
}
