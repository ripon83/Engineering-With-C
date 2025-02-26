/************************************************************
 * Pattern to dsiplay the following
1
1       2
1       2       3
1       2       3       4
1       2       3       4       5
************************************************************/
#include <stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)               //Number of rows
    {
        for(j=1;j<=i;j++)           //Print the columns
            printf("%d\t",j);
        printf("\n");               //Print newline after each row
    }
    return 0;
}