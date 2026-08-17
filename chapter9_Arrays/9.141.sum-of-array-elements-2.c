/*
 * Program: Sum Of Array Elements 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int subArraySum(int a[], int n, int sum)
{
    int i, left=0, cSum=a[0];
    for(i=1; i<=n; i++)  // Iterate through array elements
    {
        while(cSum>sum && left<i-1)  // Repeat while the condition remains true
        {
            cSum=cSum-a[left];
            left++;
        }

        if(cSum==sum)
        {
            printf("Summation found between %d and %d",  // Display output
                   left, i-1);
            return 1;
        }

        if(i<n)
            cSum=cSum+a[i];
    }

    printf("No subarray found!");  // Display output
    return 0;  // Indicate successful program termination
}

int main()  // Main function: execution starts here
{
    int a[]={5,3,7,8,12,9,2,10,1,6,34,11,56,15,12};
    int n=sizeof(a)/sizeof(a[0]);
    subArraySum(a, n, 48);
    return 0;  // Indicate successful program termination
}
