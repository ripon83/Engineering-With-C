/***************************************************************
 * Displays the following pattern-
1       2       3       4       5
1       2       3       4
1       2       3
1       2
1
****************************************************************/

#include <stdio.h>
int main()
{
    int i,j,n=5;
    for(i=n;i>0;i--)            //Number of rows
    {
        for(j=1;j<=i;j++)       //Print the column
            printf("%d\t",j);
        printf("\n");           //Print newline after each row
    }
    return 0;
}