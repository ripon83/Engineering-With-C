/***********************************************
 * Displays the following pattern-
1       2       3       4
        1       2       3
                1       2
                        1
*************************************************/
#include <stdio.h>
int main()
{
    int i,j,n=4;
    for(i=n;i>=1;i--)           //numbers of rows in decreasing order
    {
        for(j=n-i; j>0; j--)    //Print white space
            printf("\t");
        for(j=1; j<=i; j++)     //Print each number in increasing order
            printf("%d\t",j); 
        printf("\n");           //print newline after each row
    }
    return 0;
}