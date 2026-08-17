/*
 * Program: Tower Of Hanoi
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

void towerOfHanoi(int n, char src, char des, char aux)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", src, des);  // Display output
        return;
    }

    towerOfHanoi(n-1, src, aux, des);  // Function call

    printf("Move disk %d from %c to %c\n", n, src, des);  // Display output

    towerOfHanoi(n-1, aux, des, src);  // Function call
}

int main()  // Main function: execution starts here
{
    int n=4;
    towerOfHanoi(n, 'A', 'C', 'B');  // Function call
    return 0;  // Indicate successful program termination
}
