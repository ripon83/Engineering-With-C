#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    long int counter=0,n=rand();
    for(i=0;i<n;i++)                //Time complexity is O(n)
        for(j=i;j<n;j++)            //Time complexity is O(n)
            counter++;
    printf("The body of the loops is executed %ld times\n",counter);
    return 0;                       //Time complexity is O(n^2)
}