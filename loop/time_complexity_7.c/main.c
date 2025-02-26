#include <stdio.h>
#include <stdlib.h>
int main()
{
    long i, j, counter=0, n=rand();
    for(i=0;i<n;i++)                //Time complexity is O(n)
    {
        for(j=0;j<=i;j++)           //Time complexity is O(i)
        {
            counter++;
        }
    }
    printf("The body of the loop is executed %ld times\n",counter);
    return 0;                       //Overall time complexity O(n^2)
}