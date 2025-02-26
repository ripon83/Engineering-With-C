/******************************************************************************
 * Displays the following pattern-
                                                1
                                        1       2       1
                                1       2       3       2       1
                        1       2       3       4       3       2       1
                1       2       3       4       5       4       3       2       1
        1       2       3       4       5       6       5       4       3       2       1
******************************************************************************/
#include <stdio.h>
int main()
{
    int i,j,n=6;
    for(i=1; i<=n; i++)
    {
        for(j=n-i; j>=0; j--)    //print white space
            printf("\t");
        for(j=1; j<=i; j++)      //Left half
            printf("%d\t",j);
        for(j=i-1; j>=1; j--)    //right half
            printf("%d\t",j);
        printf("\n");
    }
    return 0;
}