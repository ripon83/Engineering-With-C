#include <stdio.h>
int perfect(int n)
{
    int i,sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }
    if(sum==n)
        return 1;
    return 0;
}

int main() 
{
    int m=28;
    if(perfect(m))
        printf("%d is a perfect number",m);
    else
        printf("%d is not aperfect number",m);
    return 0;
}