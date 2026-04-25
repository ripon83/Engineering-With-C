#include <stdio.h>
int main()
{
    int i,j,m=5,n=6;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                continue;
            printf("%d %d\t",i,j);
        }
        printf("\n");
    }
    return 0;
}