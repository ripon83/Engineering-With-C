/****************************************************
 * Display the following pattern-
1
2       1
3       2       1
4       3       2       1
****************************************************/

#include <stdio.h>
int main()
{
    int i,j,n=4;
    for(i=1; i<=n; i++)         //Number of rows
    {
        for(j=i; j>=1; j--)    //print decreasing order
            printf("%d\t",j);
        printf("\n");
    }
    return 0;
}