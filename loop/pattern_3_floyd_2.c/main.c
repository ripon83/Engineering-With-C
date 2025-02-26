/***********************************************
 * Displays the following inverted Floyd's triangle-
16      17      18      19      20      21
11      12      13      14      15
7       8       9       10
4       5       6
2       3
1
**************************************************/
#include <stdio.h>
int main()
{
    int n=6,k=1,i,j;
    k=n*(n-1)/2+1;              
    for(i=n;i>0;i--)   
    {
        for (j=1; j<=i; j++)        
        {
            printf("%d\t", k++);
        }
        k=k-2*i+1;
        printf("\n");             
    }
    return 0;
}