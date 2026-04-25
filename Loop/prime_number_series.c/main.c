#include <stdio.h>
#include <math.h>
int main()
{
    int i,s,k,flag=0,n=1000;
    for(i=2;i<=n;i++)
    {
        flag=0;
        s=sqrt(i);
        for(k=2;k<=s;k++)
        {
            if(i%k==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d\t",i);
    }
    return 0;
}