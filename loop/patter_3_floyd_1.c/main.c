/*****************************************************************
 * Display the following floyd's triangle
1
2       3
4       5       6
7       8       9       10
11      12      13      14      15
16      17      18      19      20      21
******************************************************************/

#include <stdio.h>
int main()
{
    int n=6,k=1,i,j;
    for(i=1;i<=n;i++)               //Number of rows
    {
        for (j=1; j<=i; j++)        //print the incremented value of k
        {
            printf("%d\t", k++);
        }
        printf("\n");               //print newline after each row
    }
    return 0;
}