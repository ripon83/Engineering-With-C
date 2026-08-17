/*
 * Program: Macro Example 12
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#define smallest(w,x,y,z) (w<x&&w<y&&w<z)?w:((x<y&&x<z)?x:(y<z)?y:z)  // Define a macro
int main()  // Main function: program execution starts here
{
    int m=smallest(150,100,120,30);
    printf("The smallest value:%d\n",m);  // Display output
    m=smallest(15,100,120,30);
    printf("The smallest value:%d\n",m);  // Display output
    m=smallest(15,100,120,3);
    printf("The smallest value:%d\n",m);  // Display output
    return 0;  // Indicate successful program termination
}
