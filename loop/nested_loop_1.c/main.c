#include <stdio.h>
int main()
{
    int i,j,m=3,n=4,count=0;
    for(i=0;i<m;i++)                //Time complexity is O(m)
    {
        for(j=0;j<n;j++)            //Time complexity is O(n)
        {
            count++;                //Increments the counters
            printf("%d\t",count);   //Prints the count
        }
        printf("\n");               //Prints a newline after each row
    }
    return 0;
}