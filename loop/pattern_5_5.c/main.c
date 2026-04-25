/**************************************************
 * Displays the following pattern-
4       3       2       1
3       2       1
2       1
1
**************************************************/
#include <stdio.h>
int main()
{
    int i,j,n=4;
    for(i=n;i>=1;i--)           //numbers of rows
    {
        for(j=i; j>=1; j--)     //print each number in decreasing order
            printf("%d\t",j);   
        printf("\n");           //print newline after each row
    }
    return 0;
}