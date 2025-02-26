/************************************************************
 * Displays the following pattern-
                                1
                        1       2       1
                1       2       3       2       1
        1       2       3       4       3       2       1
1       2       3       4       5       4       3       2       1
        1       2       3       4       3       2       1
                1       2       3       2       1
                        1       2       1
                                1
**************************************************************/                                
#include <stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=n-i; j>0; j--)    //white space
            printf("\t");
        for(j=1; j<=i; j++)      //print increasing order
            printf("%d\t",j);
        for(j=i-1; j>=1; j--)    //print decreasing order
            printf("%d\t",j);
        printf("\n");          //print newline after each row    
    }
    for(i=n-1;i>=1;i--)         //Just opposite of the above loops
    {
        for(j=n-i; j>0; j--)    
            printf("\t");
        for(j=1; j<=i; j++)     
            printf("%d\t",j);
        for(j=i-1; j>=1; j--)    
            printf("%d\t",j);
        printf("\n");         
    }   
    return 0;
}