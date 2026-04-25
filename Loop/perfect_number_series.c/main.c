#include <stdio.h>
int main()
{
    int i,j,n=10000,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
            printf("%d\n",i);
    }
    return 0;
}