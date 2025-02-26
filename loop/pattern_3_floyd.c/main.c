/*****************************************************
 * Displays the following Floyd's triangle-
1
2       3
4       5       6
7       8       9       10
11      12      13      14      15
16      17      18      19      20      21
11      12      13      14      15
7       8       9       10
4       5       6
2       3
1
*****************************************************/

#include <stdio.h>
int main()
{
    int n=6,k=1,i,j;
    for(i=1;i<=n;i++)               //Number of rows
    {
        for (j=1; j<=i; j++)        //print the incremented value of k
        {
            printf("%d\t", k++);
        }
        printf("\n");               //print newline after each row
    }
    //creating the inversion of the above loops
    k=(n-1)*(n-2)/2+1;                      //Normalize the value of k 
                                            //k=k-2*n+1
    for(i=n-1;i>0;i--)   
    {
        for (j=1; j<=i; j++)        
        {
            printf("%d\t", k++);
        }
        k=k-2*i+1;
        printf("\n");
    }
    return 0;
}