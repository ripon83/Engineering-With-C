#include <stdio.h>
int main()
{
    int i,j,m=5,n=6;
    for(i=0;i<m;i++)                //Time complexity is O(m)
    {
        for(j=0;j<n;j++)            //Time complexity is O(n)
        {
            if(i==j)                //If i equal to j
                break;              //Breaks the innermost loop 
            printf("%d %d\t",i,j);  //Prints i and j 
        }
        printf("\n");
    }                               //Overall time complexity is O(n^2)
    return 0;
}