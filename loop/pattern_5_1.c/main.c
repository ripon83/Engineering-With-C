/***************************************************
 * Displays the following pattern-
                        1
                1       2
        1       2       3
1       2       3       4
****************************************************/

#include <stdio.h>
int main()
{
    int i,j,n=4;
    for(i=1; i<=n; i++)          //Number of rows
    {
        for(j=n-i; j>0; j--)     //print white space
            printf("\t");
        for(j=1; j<=i; j++)      //print increasing order
            printf("%d\t",j);
        printf("\n");
    }
    return 0;
}