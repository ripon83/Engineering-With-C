#include <stdio.h>
#include <stdlib.h>
int main()
{
    long i, j, counter=0, m, n;
    m=rand()%100;
    n=rand()%100;
    for(i=0;i<m;i++)            //Time complexity is O(m)
        for(j=0;j<n;j++)        //Time complexity is O(n)
            counter++;          //counter=counter+1
    printf("The body of the loops is executed %ld times\n",counter);
    return 0;                   //Overall time complexity is O(mn)
}