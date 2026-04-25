#include <stdio.h>
int main()
{
    int i,j,m=5,n=6;
    for(i=0;i<m;i++)
    {
        if(i==3)
            break;
        for(j=0;j<n;j++)
        {
            printf("%d %d\t",i,j);
        }
        printf("\n");
    }
    return 0;
}