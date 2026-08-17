/*
 * Program: Generic Function For Finding The Largest Element
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

int max(void *arr, int n, int size)
{
    char *p = (char *)arr;  // Declare and initialize a character pointer
    int max = 0;

    for(int i = 0; i < n; i++)  // Repeat over the required characters
    {
        if(memcmp(p + i * size,
                  p + (i + 1) * size,
                  size) < 0)
            max = i;
    }

    return max;
}

int main()  // Main function: program execution starts here
{
    double arr[] = {4.5,3,5,7,8,9,2,1,6,10};

    int k = max(arr, 10, sizeof(double));

    printf("Largest item is %lf\n", arr[k]);  // Display output

    return 0;  // Indicate successful program termination
}
