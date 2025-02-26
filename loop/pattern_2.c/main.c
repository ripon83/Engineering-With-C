/*************************************************************
 * Display the following pattern-
1
1       2
1       2       3
1       2       3       4
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
    for(i=1;i<=n;i++)           //number of rows         
    {
        for(j=1;j<=i;j++)       //Print the numbers
            printf("%d\t",j);
        printf("\n");           //print newline after each row
    }
    for(i=n-1;i>0;i--)           //Inverting the above outermost loops
    {
        for(j=1;j<=i;j++)       
            printf("%d\t",j);
        printf("\n");           
    }
    return 0;
}