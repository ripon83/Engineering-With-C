/*
 * Program: Find Out The Output 34
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[3][4]={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    printf("%ld\t%ld\t%ld",  // Display output
           sizeof(a),
           sizeof(a[0]),
           sizeof(a[0][0]));
    return 0;  // Indicate successful program termination
}
