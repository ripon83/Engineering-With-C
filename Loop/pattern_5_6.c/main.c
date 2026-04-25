/*****************************************************************
 * Displays the following pattern-
1       2       3       4       5       4       3       2       1
        1       2       3       4       3       2       1
                1       2       3       2       1
                        1       2       1
                                1
******************************************************************/
#include <stdio.h>
int main()
{
    int i,j,n=5;
    for(i=n;i>=1;i--)           //numbers of rows
    {
        for(j=n-i; j>0; j--)     //Print white space
            printf("\t");
        for(j=1; j<=i; j++)       //Left side
            printf("%d\t",j);
        for(j=i-1; j>=1; j--)     //right side
            printf("%d\t",j);   
        printf("\n");           //print newline after each row
    }
    
    return 0;
}